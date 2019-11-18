using System;
using System.Collections.Generic;
using System.Text;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

using KDebugPackage;
using KDebugPackage.Console;
using KDebugPackage.Data;


public partial class KConsoleWindow : MonoBehaviour, IConsoleHandler
{
    // Input Fields
    [Header("Input Fields")]
    [SerializeField] 
    private TMPro.TextMeshProUGUI _inputText = null;
    [SerializeField] 
    private TMP_InputField_ConsoleEdit _inputField = null;
    private int _currentInputLength = 0;

    // Prediction
    [Header("Prediction")]
    private Color _predictionTextColour = Color.gray;
    private TMPro.TextMeshProUGUI _predictionText = null;

    private RectTransform _predictionTransform = null;
    [SerializeField]
    private PredictionItem _predictionItemTemplate = null;
    [SerializeField]
    private RectTransform _predictionItemRoot = null;
    private List<PredictionItem> _predictionItems = null;
    private int _selectedPredictionItem = 0;

    // Commands
    private List<ICommand> _predictionCommands = null;
    private ICommand _currentCommand = null;

    // History
    [Header("History")]
    [SerializeField]
    private RectTransform _historyRect = null;
    [SerializeField]
    private TMPro.TextMeshProUGUI _historyTemplate = null;
    [SerializeField]
    private Image _historyImageBacker = null;

    private Transform _historyItemPoolRoot = null;
    private Stack<TMPro.TextMeshProUGUI> _historyItemPool = null;
    private Queue<TMPro.TextMeshProUGUI> _historyQueue = null;

    [Header("Context Object Raycast")]
    [SerializeField]
    private LayerMask _raycastLayers = new LayerMask();

    [SerializeField] 
    private RectTransform _contextRect = null;
    [SerializeField]
    private TMPro.TextMeshProUGUI _contextText = null;

    [Header("Logic")]
    // Remember Last Command
    [SerializeField]
    private bool _rememberLastCommandOnOpen = true;
    private string _lastCommandName = "";

    [Header("Visuals")] 
    [SerializeField]
    private Image[] _primaryImages = null;
    [SerializeField]
    private Image[] _secondaryImages = null;
    [SerializeField]
    private TextMeshProUGUI[] _primaryText = null;
    [SerializeField]
    private TextMeshProUGUI[] _secondaryText = null;

    private bool _bJustEnabled = false;

    public bool IsOpen => gameObject.activeSelf;

    private UpdateContextLogic _updateContextLogic = null;

    private StringBuilder _rawInput = null;
    private StringBuilder _currentString = null;

    #region Mono Functions

    void IConsoleHandler.OnAwake(ConsoleData a_data)
    {
        _inputField.characterLimit = a_data.MaxConsoleInput;
        _rawInput = new StringBuilder(a_data.MaxConsoleInput);
        _currentString = new StringBuilder(a_data.MaxConsoleInput);

        _updateContextLogic = new UpdateContextLogic(_raycastLayers);
        _updateContextLogic.OnContextSet += OnContextSet;

        CreatePredictionObject();

        AwakeHistoryItemPool();

        _inputField.onValidateInput += OnValidateInput;

        Transform parent = _inputField.transform.parent;
        if (parent)
        {
            Transform caretTransform = parent.GetChild(0);

            if (caretTransform)
            {
                caretTransform.SetAsLastSibling();
            }
        }

        SelectPredictionItem(_selectedPredictionItem);
    }

    void IConsoleHandler.OnUpdate()
    {
        UpdatePredictionObjectOffset();

        if (_bJustEnabled)
        {
            OnPostEnable();
        }

        if (Input.GetKeyDown(KeyCode.Tab))
        {
            string input = _inputField.text;
            if (_currentInputLength <= 1)
            {
                if (_currentCommand != null && 
                    _inputField.text.Length != _currentCommand.Name.Length)
                {
                    // Complete Command
                    input += _predictionText.text;
                }
            }
            
            // Add Extra Spacing
            input += ' ';
            _inputField.SetTextWithoutNotify(input);
            _inputField.caretPosition = input.Length;
            OnInputStringChanged();
        }
        else if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            CyclePredictionItem(1);
        }
        else if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            CyclePredictionItem(-1);
        }
        else if (Input.GetMouseButtonUp(0))
        {
            // Raycast
            _updateContextLogic.UpdateContext();
        }
        else if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.KeypadEnter))
        {
            string input = _inputField.text;
            if (_currentInputLength <= 1 &&
                _currentCommand != null &&
                _inputField.text.Length != _currentCommand.Name.Length)
            {
                // Complete Command
                input += _predictionText.text;
                // Add Extra Spacing
                input += ' ';
                _inputField.SetTextWithoutNotify(input);
                _inputField.caretPosition = input.Length;
                OnInputStringChanged();
            }
            else
            {
                _inputField.ReleaseSelection();
                _inputField.DeactivateInputField();
            }
        }
    }

    private void OnEnable()
    {
        ResetPredictionItems();

        if (_rememberLastCommandOnOpen)
        {
            _inputField.SetTextWithoutNotify(_lastCommandName);
            if (string.IsNullOrEmpty(_lastCommandName))
            {
                SetPredictionText("Type a Command...");
            }

            _inputField.caretPosition = _lastCommandName.Length;
            OnInputStringChanged();
        }
        else
        {
            _inputField.SetTextWithoutNotify("");
            SetPredictionText("Type a Command...");
        }
        KDebug.Console.DumpHistoryToHandler();
        _bJustEnabled = true;
    }

    private void OnDisable()
    {
        while (_historyQueue.Count > 0)
        {
            TextMeshProUGUI history = _historyQueue.Dequeue();
            _historyItemPool.Push(history);
        }
    }
    #endregion

    #region Prediction Functions
    /// <summary>
    /// Creates the Predictive Text Object as the last sibling
    /// </summary>
    private void CreatePredictionObject()
    {
        // Create Prediction Object
        GameObject predictionGO = Instantiate(_inputText.gameObject, _inputText.transform.parent);
        predictionGO.transform.SetAsLastSibling();
        predictionGO.name = "TXT_Prediction";
        _predictionText = predictionGO.GetComponent<TMPro.TextMeshProUGUI>();
        SetPredictionText("");
        _predictionTransform = (RectTransform)predictionGO.transform;
        _predictionText.color = _predictionTextColour;

        // Update its position
        UpdatePredictionObjectOffset();

        // Calculate Max Prediction Items our root can hold.
        RectTransform itemRect = _predictionItemTemplate.transform as RectTransform;
        if (itemRect != null)
        {
            float itemSize = itemRect.sizeDelta.y;

            float rootSize = _predictionItemRoot.rect.size.y;

            int maxItems = Mathf.FloorToInt(rootSize / itemSize);

            _predictionItems = new List<PredictionItem>(maxItems);
            _predictionCommands = new List<ICommand>(maxItems + 1);
            for (int i = 0; i < maxItems; ++i)
            {
                PredictionItem item = Instantiate(_predictionItemTemplate, _predictionItemRoot);

                Color color = KDebug.GetVisualData.PrimaryColor;
                bool IsEven = i % 2 == 0;
                float alpha = IsEven ? 0.85f : 1f;
                color.a = alpha;
                
                item.BaseColor = color;
                item.Image.color = item.BaseColor;
                item.Text.color = KDebug.GetVisualData.PrimaryTextColor;

                item.gameObject.SetActive(true);
                _predictionItems.Add(item);
            }
        }
        else
        {
            _predictionCommands = new List<ICommand>(3);
            throw new NullReferenceException("Item Rect is null!");
        }
    }

    /// <summary>
    /// Updates the offset of the predicted text.
    /// </summary>
    private void UpdatePredictionObjectOffset()
    {
        Vector2 position = new Vector2(0f,_predictionTransform.anchoredPosition.y);

        if (string.IsNullOrEmpty(_inputField.text) == false)
        {
            Vector2 values = _inputText.GetPreferredValues();
            position = new Vector2(values.x, _predictionTransform.anchoredPosition.y);
        }
            
        _predictionTransform.anchoredPosition = position;
    }

    private void SetPredictionText(string a_value)
    {
        _predictionText.text = a_value;
    }

    private void ResetPredictionItems()
    {
        for (int i = 0; i < _predictionItems.Count; ++i)
        {
            PredictionItem item = _predictionItems[i];
            item.Image.color = item.BaseColor;
            item.Image.canvasRenderer.cull = true;
            item.Text.canvasRenderer.cull = true;
            //item.gameObject.SetActive(false);
            item.Rect.sizeDelta = _predictionItemTemplate.Rect.sizeDelta;
        }

        _predictionCommands.Clear();

        _selectedPredictionItem = 0;
        SelectPredictionItem(_selectedPredictionItem);
    }

    #endregion

    private void OnPostEnable()
    {
        _inputField.gameObject.SetActive(true);
        _inputField.enabled = true;
        PointerEventData data = new PointerEventData(EventSystem.current);
        _inputField.OnPointerClick(data);
        _bJustEnabled = false;
    }


    #region Input Field Callbacks
    public void OnInputStringChanged()
    {
        ResetPredictionItems();
        string input = _inputField.text;
        //string[] inputStrings = input.Split(' ');
        //_currentInputLength = inputStrings.Length;

        if (string.IsNullOrWhiteSpace(input))
        {
            _currentCommand = null;
            SetPredictionText("Type a Command...");
            return;
        }
        ParseConsoleInputSB(input);
        //ParseConsoleInput(input.Split(' '));
    }

    public void OnInputEndEdit()
    {
        string input = _inputField.text;
        string[] inputStrings = input.Split(' ');
        string[] inputParams = null;

        ResetPredictionItems();

        if (inputStrings.Length > 0)
        {
            inputParams = new string[inputStrings.Length - 1];
            Array.Copy(inputStrings, 1, inputParams, 0, inputStrings.Length - 1);
        }
        else
        {
            inputParams = new string[0];
        }
        
        _inputField.SetTextWithoutNotify("");
        SetPredictionText("");

        ICommand command = KDebug.Console.LookupExactMatch(inputStrings[0]);

        if (command != null)
        {
            KDebug.Console.RunCommand(command, inputParams);
            _lastCommandName = command.Name;
        }
        else if(string.IsNullOrWhiteSpace(inputStrings[0]) == false)
        {
            KDebug.Console.WriteTo("Unknown Command: " + inputStrings[0]);
        }

        _inputField.ActivateInputField();
    }

    public void OnInputSelect()
    {
    }

    public void OnInputDeselect()
    {
    }

    private char OnValidateInput(string a_text, int a_charindex, char a_addedchar)
    {
        char testValue = (char)KDebug.Console.ToggleOpenKeyCode;

        if (a_addedchar == testValue)
        {
            return '\0';
        }

        return a_addedchar;
    }

    #endregion

    #region IConsoleHandler Functions
    public void Open()
    {
        gameObject.SetActive(true);
    }

    public void Close()
    {
        _inputField.SetTextWithoutNotify("");
        gameObject.SetActive(false);
    }

    public void OnVisualChange()
    {
        for (int i = 0; i < _primaryImages.Length; ++i)
        {
            Image img = _primaryImages[i];
            if (img != null)
            {
                img.color = KDebug.GetVisualData.PrimaryColor;
            }
        }

        for (int i = 0; i < _secondaryImages.Length; ++i)
        {
            Image img = _secondaryImages[i];
            if (img != null)
            {
                img.color = KDebug.GetVisualData.SecondaryColor;
            }
        }

        for (int i = 0; i < _primaryText.Length; ++i)
        {
            TextMeshProUGUI text = _primaryText[i];
            if (text != null)
            {
                text.color = KDebug.GetVisualData.PrimaryTextColor;
            }
        }

        for (int i = 0; i < _secondaryText.Length; ++i)
        {
            TextMeshProUGUI text = _secondaryText[i];
            if (text != null)
            {
                text.color = KDebug.GetVisualData.SecondaryTextColor;
            }
        }

        Color predictionColour = KDebug.GetVisualData.SecondaryTextColor;
        predictionColour.a = KDebug.GetVisualData.PredictionTextAlpha;

        _predictionTextColour = predictionColour;

        Color historyBackerColor = KDebug.GetVisualData.PrimaryColor;
        historyBackerColor.a = KDebug.GetVisualData.HistoryBackerAlpha;

        if (_historyImageBacker != null)
        {
            _historyImageBacker.color = historyBackerColor;
        }
    }

    public void OnWriteToConsole(string a_value)
    {
        if (gameObject.activeSelf == false)
            return;

        TextMeshProUGUI newHistory = _historyItemPool.Pop();
        newHistory.text = a_value;
        newHistory.rectTransform.SetParent(_historyRect, false);
        newHistory.canvasRenderer.cull = false;

        Vector2 values = newHistory.GetPreferredValues();
        float heightOffset = 0f;
        if (values.y > _historyTemplate.rectTransform.rect.height)
        {
            newHistory.rectTransform.sizeDelta = new Vector2(newHistory.rectTransform.sizeDelta.x, values.y);
            heightOffset = (values.y - _historyTemplate.rectTransform.rect.height) / 2;
        }
        newHistory.rectTransform.anchoredPosition = new Vector2(0, _historyTemplate.rectTransform.anchoredPosition.y + heightOffset);

        if (_historyQueue.Count > 0)
        {
            foreach (TextMeshProUGUI textMeshProUgui in _historyQueue)
            {
                float offset = Mathf.Max(_historyTemplate.rectTransform.rect.height, values.y);
                textMeshProUgui.rectTransform.anchoredPosition = new Vector2(0f, textMeshProUgui.rectTransform.anchoredPosition.y + offset);
            }

            TextMeshProUGUI oldestHistory = _historyQueue.Peek();

            if (oldestHistory.rectTransform.anchoredPosition.y + (oldestHistory.rectTransform.sizeDelta.y * 0.5f) > _historyRect.rect.height)
            {
                oldestHistory = _historyQueue.Dequeue();
                oldestHistory.canvasRenderer.cull = true;
                oldestHistory.rectTransform.SetParent(_historyItemPoolRoot, false);
                _historyItemPool.Push(oldestHistory);
            }
        }
        _historyQueue.Enqueue(newHistory);
    }

    #endregion

    private void AwakeHistoryItemPool()
    {
        // Calculate Max Items
        float height = _historyRect.rect.height;
        float itemMinHeight = _historyTemplate.rectTransform.rect.height;
        float fMaxItems = height / itemMinHeight;
        int iMaxItems = Mathf.CeilToInt(fMaxItems);

        // Create Pool Root
        GameObject historyItemPool = new GameObject("OBJ_HistoryItemPool");
        historyItemPool = GameObject.Instantiate(historyItemPool, _historyTemplate.transform.parent);
        _historyItemPoolRoot = historyItemPool.transform;
        _historyItemPoolRoot.SetAsLastSibling();

        _historyItemPool = new Stack<TextMeshProUGUI>(iMaxItems);
        _historyQueue = new Queue<TextMeshProUGUI>(iMaxItems);

        for (int i = 0; i < iMaxItems; ++i)
        {
            TextMeshProUGUI textItem = Instantiate(_historyTemplate.gameObject,
                                                    historyItemPool.transform)
                                                    .GetComponent<TextMeshProUGUI>();

            Debug.Assert(textItem != null, "Failed to Clone Text Item");
            textItem.canvasRenderer.cull = true;
            textItem.gameObject.SetActive(true);
            _historyItemPool.Push(textItem);
        }
    }

    private void ParseConsoleInputSB(string a_string)
    {
        _rawInput.Append(a_string);

        bool bCommandParsed = false;
        bool bSubStringComplete = false;
        int ArgCount = 0;
        int subStrCount = 1;
        for (int i = 0; i < _rawInput.Length; ++i)
        {
            char c = _rawInput[i];
            bool bIsSeparatorToken = c == ' ';
            bool bLastCharacter = i + 1 == _rawInput.Length;
            
            if (bSubStringComplete == false) // Building Substring
            {
                if (bIsSeparatorToken) // Substring Complete
                {
                    bSubStringComplete = true;
                    subStrCount++;
                }
                else if (bLastCharacter) // Last Character - Complete
                {
                    bSubStringComplete = true;
                    _currentString.Append(c);
                } 
                else // Append Substring
                {
                    _currentString.Append(c);
                }
            }
            
            if(bSubStringComplete)// Substring is Complete
            {
                // Get Substring
                string substring = _currentString.ToString().ToLower();
                _currentString.Clear();

                // Process Substring
                if (bCommandParsed == false) // Must be Command
                {
                    _predictionCommands.Clear();
                    // Try to find matches
                    bool bMatchFound = KDebug.Console.LookupBestMatches(substring, ref _predictionCommands);

                    if (bMatchFound == false) // None found, bail out!
                    {
                        SetPredictionText(string.Empty);
                        _currentCommand = null;
                        break;
                    }
                    // Match found!
                    ICommand firstMatch = _predictionCommands[0];
                    _currentCommand = firstMatch;

                    string predictionText = firstMatch.Name.Substring(substring.Length, firstMatch.Name.Length - substring.Length);
                    SetPredictionText(predictionText);

                    FillPredictionItemsWithCommands(_predictionCommands);

                    // Command Fully Parsed?
                    bCommandParsed = substring == firstMatch.Name.ToLower();

                    if (bCommandParsed == false)
                    {
                        break;
                    }
                    // Command is Fully Parsed

                    bSubStringComplete = false; // Begin parse of next substring
                    if (bLastCharacter) // Last Character i.e str = "Noclip" 
                    {
                        // Fill prediction with first argument
                        string argName = _currentCommand.GetArgName(ArgCount++);
                        SetPredictionText(" " + argName);
                    }
                }
                else // Command Parsed Must be Parameters
                {
                    if (string.IsNullOrWhiteSpace(substring))
                    {
                        SetPredictionText(string.Empty);
                    } 
                    else if (_currentCommand != null)
                    {
                        int argIdx = ArgCount + 1;
                        if (bLastCharacter && argIdx < _currentCommand.ArgCount)
                        {
                            string argName = _currentCommand.GetArgName(argIdx);
                            SetPredictionText(" " + argName);
                            
                        }

                        bSubStringComplete = false;
                        ArgCount++;
                    }
                    else
                    {
                        Debug.Assert(false, "Why was this hit?");
                        Debug.Break(); // Should not hit this!
                    }
                }
            }
        }
        _currentInputLength = subStrCount;
        _rawInput.Clear();
    }

    private void ParseConsoleInput(params string[] a_input)
    {
        bool IsCommand = _currentInputLength == 1;

        if (IsCommand) // Parse Command
        {
            _predictionCommands.Clear();
            bool bMatchFound = KDebug.Console.LookupBestMatches(a_input[0], ref _predictionCommands);

            if (bMatchFound)
            {
                ICommand firstMatch = _predictionCommands[0];
                string predictionText = firstMatch.Name.Substring(a_input[0].Length, firstMatch.Name.Length - a_input[0].Length);
                SetPredictionText(predictionText);
                _currentCommand = firstMatch;
                FillPredictionItemsWithCommands(_predictionCommands);
            }
            else
            {
                _currentCommand = null;
                SetPredictionText(string.Empty);
            }
        }

        bool bCommandComplete = _currentCommand != null && a_input[0].ToLower().Contains(_currentCommand.Name.ToLower());
        bool bArgEmpty = _currentInputLength <= 1 || string.IsNullOrWhiteSpace(a_input[1]);

        if(bCommandComplete == false && _currentInputLength > 1)
        {
            _currentCommand = null;
            SetPredictionText(string.Empty);
        }

        if(IsCommand && bCommandComplete == false)
        {
            return;
        }


        int ArgIndex = _currentInputLength - 1;
        if(_currentInputLength > 1)
        {
            bool bPreviousEmpty = string.IsNullOrWhiteSpace(a_input[ArgIndex - 1]);
            bArgEmpty = string.IsNullOrWhiteSpace(a_input[ArgIndex]);

            if(bArgEmpty && bPreviousEmpty)
            {
                SetPredictionText("");
                return;
            }

            if (bArgEmpty == false)
            {
                ++ArgIndex;
            }
        }
        else
        {
            ++ArgIndex;
        }

        if (_currentCommand != null)
        {
            string argName = _currentCommand.GetArgName(ArgIndex - 1);
            argName = argName.Insert(0, " ");
            SetPredictionText(argName);
        }
    }

    #region Context Functions

    private void OnContextSet(GameObject a_object)
    {
        if (_contextText == null || a_object == null)
        {
            _contextRect.gameObject.SetActive(false);
            return;
        }

        if (_contextRect.gameObject.activeSelf == false)
        {
            _contextRect.gameObject.SetActive(true);
        }

        _contextText.text = a_object.name + " : " + a_object.tag + " : " + a_object.GetInstanceID();
        Vector2 newValues  = _contextText.GetPreferredValues();

        _contextRect.sizeDelta = new Vector2(newValues.x + 20f, _contextRect.sizeDelta.y);
    }

    #endregion

    private void FillPredictionItemsWithCommands(List<ICommand> a_commandList)
    {
        int predictionItemsCount = _predictionItems.Count;

        // Best Size used for sizing of 
        Vector2 itemSize = _predictionItemTemplate.Rect.sizeDelta;
        float bestWidth = itemSize.x;
        for (int i = 0; i < a_commandList.Count; ++i)
        {
            ICommand predictedCommand = a_commandList[i];
            int itemIdx = predictionItemsCount - 1 - i;

            if (itemIdx < 0 || itemIdx >= predictionItemsCount)
            {
                continue;
            }
            _currentString.Clear();

            PredictionItem item = _predictionItems[itemIdx];

            _currentString.Append(predictedCommand.Name);

            if (predictedCommand.ArgCount != 0)
            {
                _currentString.Append(" - ");
                for (int j = 0; j < predictedCommand.ArgCount; ++j)
                {
                    _currentString.Append(predictedCommand.GetArgName(j));
                    if (j + 1 < predictedCommand.ArgCount)
                    {
                        _currentString.Append(", ");
                    }
                }
            }

            item.Text.text = _currentString.ToString();

            float width = item.Text.GetPreferredValues().x + 10f;
            if (width > bestWidth)
            {
                bestWidth = width;
            }

            item.Image.canvasRenderer.cull = false;
            item.Text.canvasRenderer.cull = false;
            _currentString.Clear();
        }

        itemSize.x = bestWidth;
        for (int i = 0; i < _predictionItems.Count; ++i)
        {
            _predictionItems[i].Rect.sizeDelta = itemSize;
        }
    }

    private void CyclePredictionItem(int a_dir)
    {
        int newSelection = _selectedPredictionItem + a_dir;

        if (newSelection < _predictionCommands.Count &&
            newSelection >= 0)
        {
            SelectPredictionItem(newSelection);
        }
    }

    private void SelectPredictionItem(int a_id)
    {
        // Deselect Previous
        PredictionItem item = GetPredictionItem(_selectedPredictionItem);
        if (item != null)
        {
            item.Image.color = item.BaseColor;
        }

        // Highlight new
        item = GetPredictionItem(a_id);
        if (item != null)
        {
            item.Image.color = KDebug.GetVisualData.SecondaryColor;
            _selectedPredictionItem = a_id;

            int predictedCommandCount = _predictionCommands.Count;
            if (predictedCommandCount > 0 &&
                _selectedPredictionItem < predictedCommandCount)
            {
                ICommand command = _predictionCommands[_selectedPredictionItem];
                if (command != null)
                {
                    string input = _inputField.text;
                    string[] inputStrings = input.Split(' ');

                    string predictionText = command.Name.Substring(inputStrings[0].Length, command.Name.Length - inputStrings[0].Length);
                    SetPredictionText(predictionText);
                    _currentCommand = command;
                }
            }
        }
        else
        {
            _selectedPredictionItem = -1;
        }
    }

    private PredictionItem GetPredictionItem(int a_id)
    {
        int count = _predictionItems.Count;
        int itemIdx = count - 1 - a_id;
        if (count != 0 &&
            itemIdx >= 0 &&
            itemIdx < count)
        {
            return _predictionItems[itemIdx];
        }

        return null;
    }

}