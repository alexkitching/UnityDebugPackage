using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;


public class KConsoleWindow : MonoBehaviour, IConsoleHandler
{
    // Input Fields
    [Header("Input Fields")]
    [SerializeField] 
    private TMPro.TextMeshProUGUI _inputText = null;
    [SerializeField] 
    private TMPro.TMP_InputField _inputField = null;
    private int _currentInputLength = 0;

    // Prediction
    [Header("Prediction")]
    private Color _predictionTextColour = Color.gray;
    private TMPro.TextMeshProUGUI _predictionText = null;
    private RectTransform _predictionTransform = null;

    // Commands
    private List<ICommand> _predictionCommands = new List<ICommand>(5);
    private ICommand _currentCommand = null;

    // History
    [Header("History")]
    [SerializeField]
    private RectTransform _HistoryRect = null;
    [SerializeField]
    private TMPro.TextMeshProUGUI _HistoryTemplate = null;

    private Transform _HistoryItemPoolRoot = null;
    private Stack<TMPro.TextMeshProUGUI> _HistoryItemPool = null;
    private Queue<TMPro.TextMeshProUGUI> _HistoryQueue = null;

    [Header("Context Object Raycast")]
    [SerializeField]
    private LayerMask _RaycastLayers;

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
    private Image[] primaryImages = null;
    [SerializeField]
    private Image[] secondaryImages = null;
    [SerializeField]
    private TextMeshProUGUI[] primaryText = null;

    private bool bJustEnabled = false;

    public bool IsOpen => gameObject.activeSelf;

    private void Awake()
    {
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
    }


    /// <summary>
    /// Creates the Predictive Text Object as the last sibling
    /// </summary>
    private void CreatePredictionObject()
    {
        GameObject predictionGO = Instantiate(_inputText.gameObject, _inputText.transform.parent);
        predictionGO.transform.SetAsLastSibling();
        predictionGO.name = "TXT_Prediction";
        _predictionText = predictionGO.GetComponent<TMPro.TextMeshProUGUI>();
        SetPredictionText("");
        _predictionTransform = (RectTransform)predictionGO.transform;
        _predictionText.color = _predictionTextColour;
        UpdatePredictionObjectOffset();
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

    private void Update()
    {
        UpdatePredictionObjectOffset();

        if (bJustEnabled)
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
                    _inputField.SetTextWithoutNotify(input);
                    _inputField.caretPosition = input.Length;
                    OnInputStringChanged();
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
            // TODO Cycle Previous Commands?
        }
        else if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            // TODO Cycle Previous Commands?
        }
        else if (Input.GetMouseButtonUp(0))
        {
            // Raycast
            RaycastUpdateContext();
        }
    }

    private void OnEnable()
    {
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
        }
        KDebug.Console.DumpHistoryToHandler();
        bJustEnabled = true;
    }

    private void OnPostEnable()
    {
        _inputField.gameObject.SetActive(true);
        _inputField.enabled = true;
        PointerEventData data = new PointerEventData(EventSystem.current);
        _inputField.OnPointerClick(data);
        bJustEnabled = false;
    }

    private void OnDisable()
    {

        while (_HistoryQueue.Count > 0)
        {
            TextMeshProUGUI history = _HistoryQueue.Dequeue();
            _HistoryItemPool.Push(history);
        }
    }

    #region InputFieldCallbacks
    public void OnInputStringChanged()
    {
        Debug.Log("OnInputStringChanged");
        string input = _inputField.text;

        string[] inputStrings = input.Split(' ');
        _currentInputLength = inputStrings.Length;

        if (string.IsNullOrWhiteSpace(input))
        {
            _currentCommand = null;
            SetPredictionText("Type a Command...");
            return;
        }

        bool IsCommand = _currentInputLength == 1;

        if (IsCommand)
        {
            bool bMatchFound  = KDebug.Console.LookupBestMatches(input, ref _predictionCommands);

            if (bMatchFound)
            {
                ICommand firstMatch = _predictionCommands[0];
                string predictionText = firstMatch.Name.Substring(input.Length, firstMatch.Name.Length - input.Length);
                Debug.Log(predictionText);
                SetPredictionText(predictionText);
                _currentCommand = firstMatch;
            }
            else
            {
                _currentCommand = null;
                SetPredictionText(string.Empty);
            }
            _predictionCommands.Clear();
        }

        bool bCommandComplete = _currentCommand != null && string.IsNullOrWhiteSpace(_predictionText.text);
        bool bArgEmpty = _currentInputLength <= 1 || string.IsNullOrWhiteSpace(inputStrings[1]);

        Debug.Log("CommandComplete: " + bCommandComplete + " Arg Count: " + _currentInputLength + "ArgEmpty: " + bArgEmpty);
        
        if(bCommandComplete)// Arguments
        {
            string argName = _currentCommand.GetArgName(_currentInputLength - 1);
            argName = argName.Insert(0, " ");
            SetPredictionText(argName);
        }
        else if(_currentInputLength > 1)
        {
            int ArgIndex = _currentInputLength - 1;
            bArgEmpty = string.IsNullOrWhiteSpace(inputStrings[ArgIndex]);

            if (bArgEmpty == false)
            {
                ++ArgIndex;
            }

            Debug.Assert(_currentCommand != null, "Current Command is null!");

            string argName = _currentCommand.GetArgName(ArgIndex - 1);
            argName = argName.Insert(0, " ");
            SetPredictionText(argName);
        }

    }

    public void OnInputEndEdit()
    {
        string input = _inputField.text;
        string[] inputStrings = input.Split(' ');
        string[] inputParams = null;

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
        Debug.Log("OnInputSelect");
    }

    public void OnInputDeselect()
    {
        Debug.Log("OnInputDeselect");
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

    public void Open()
    {
        gameObject.SetActive(true);
    }

    public void Close()
    {
        gameObject.SetActive(false);
    }

    private void SetPredictionText(string a_value)
        {
            _predictionText.text = a_value;
        }

    private void AwakeHistoryItemPool()
    {
        // Calculate Max Items
        float height = _HistoryRect.rect.height;
        float itemMinHeight = _HistoryTemplate.rectTransform.rect.height;
        float fMaxItems = height / itemMinHeight;
        int iMaxItems = Mathf.FloorToInt(fMaxItems);

        // Create Pool Root
        GameObject historyItemPool = new GameObject("OBJ_HistoryItemPool");
        historyItemPool = GameObject.Instantiate(historyItemPool, _HistoryTemplate.transform.parent);
        _HistoryItemPoolRoot = historyItemPool.transform;
        _HistoryItemPoolRoot.SetAsLastSibling();

        _HistoryItemPool = new Stack<TextMeshProUGUI>(iMaxItems);
        _HistoryQueue = new Queue<TextMeshProUGUI>(iMaxItems);

        for (int i = 0; i < iMaxItems; ++i)
        {
            TextMeshProUGUI textItem = Instantiate(_HistoryTemplate.gameObject,
                                                    historyItemPool.transform)
                                                    .GetComponent<TextMeshProUGUI>();

            Debug.Assert(textItem != null, "Failed to Clone Text Item");
            _HistoryItemPool.Push(textItem);
        }
    }

    public void OnWriteToConsole(string a_value, Color a_printColor)
    {
        if (gameObject.activeSelf == false)
            return;

        TextMeshProUGUI newHistory = _HistoryItemPool.Pop();
        newHistory.text = a_value;
        newHistory.color = a_printColor;
        newHistory.rectTransform.SetParent(_HistoryRect, false);
        newHistory.gameObject.SetActive(true);

        Vector2 values = newHistory.GetPreferredValues();
        float heightOffset = 0f;
        if (values.y > _HistoryTemplate.rectTransform.rect.height)
        {
            newHistory.rectTransform.sizeDelta = new Vector2(newHistory.rectTransform.sizeDelta.x, values.y);
            heightOffset = (values.y - _HistoryTemplate.rectTransform.rect.height) / 2;
        }
        newHistory.rectTransform.anchoredPosition = new Vector2(0, _HistoryTemplate.rectTransform.anchoredPosition.y + heightOffset);

        if (_HistoryQueue.Count > 0)
        {
            foreach (TextMeshProUGUI textMeshProUgui in _HistoryQueue)
            {
                float offset = Mathf.Max(_HistoryTemplate.rectTransform.rect.height, values.y);
                textMeshProUgui.rectTransform.anchoredPosition = new Vector2(0f, textMeshProUgui.rectTransform.anchoredPosition.y + offset);
            }

            TextMeshProUGUI oldestHistory = _HistoryQueue.Peek();

            if (oldestHistory.rectTransform.anchoredPosition.y + (oldestHistory.rectTransform.sizeDelta.y * 0.5f) > _HistoryRect.rect.height)
            {
                oldestHistory = _HistoryQueue.Dequeue();
                oldestHistory.gameObject.SetActive(false);
                oldestHistory.rectTransform.SetParent(_HistoryItemPoolRoot, false);
                _HistoryItemPool.Push(oldestHistory);
            }
        }
        _HistoryQueue.Enqueue(newHistory);
    }

    private Vector3? _lastRayDirection = null;
    private int _lastRaySelection = 0;
    private void RaycastUpdateContext()
    {
        RaycastHit[] hit = new RaycastHit[10];
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        
        int hitCount = Physics.RaycastNonAlloc(ray, hit, 1000000, _RaycastLayers.value);

        GameObject context = null;
        if (hitCount > 0)
        {
            int selection = _lastRaySelection;

            
            if (_lastRayDirection != null)
            {
                float dot = Vector3.Dot(ray.direction, _lastRayDirection.Value);
                if (dot > 0.998) // Same Direction - Cycle
                {
                    selection++;
                    if (selection >= hitCount)
                    {
                        selection = 0;
                    }

                    if (hit[selection].transform == null) // Avoid Possible null Selection
                    {
                        selection = 0;
                    }
                }
                else // New Direction - Reset
                {
                    selection = 0;
                }
            }

            context = hit[selection].transform.gameObject;

            _lastRayDirection = ray.direction;
            _lastRaySelection = selection;

        }
        else
        {
            _lastRayDirection = null;
            _lastRaySelection = 0;
        }

        if (KDebug.Console.CommandContext != null &&
            context != null &&
            KDebug.Console.CommandContext.GetInstanceID() == context.GetInstanceID())
        {
            return;
        }

        KDebug.Console.CommandContext = context;
        OnContextSet(KDebug.Console.CommandContext);
    }

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

    public void OnVisualChange(ref VisualSchemeData a_data)
    {
        for (int i = 0; i < primaryImages.Length; ++i)
        {
            Image img = primaryImages[i];
            if (img != null)
            {
                img.color = a_data.PrimaryColor;
            }
        }

        for (int i = 0; i < secondaryImages.Length; ++i)
        {
            Image img = secondaryImages[i];
            if (img != null)
            {
                img.color = a_data.SecondaryColor;
            }
        }

        for (int i = 0; i < primaryText.Length; ++i)
        {
            TextMeshProUGUI text = primaryText[i];
            if (text != null)
            {
                text.color = a_data.PrimaryTextColor;
            }
        }

        _predictionTextColour = new Color(a_data.PrimaryTextColor.r, a_data.PrimaryTextColor.g, a_data.PrimaryTextColor.b, a_data.PredictionTextAlpha);
    }
}