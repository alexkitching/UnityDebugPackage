using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

namespace KConsole
{
    public class KConsoleWindow : MonoBehaviour, IConsoleHandler
    {

        public class KConsoleTestCommandChildren : ICommand
        {
            string ICommand.Name { get; set; } = "Children";

            string ICommand.GetArgName(int a_argIndex)
            {
                switch (a_argIndex)
                {
                    case 0:
                        return "Health:int";
                    case 1:
                        return "Damage:float";
                }
                return string.Empty;
            }

            string ICommand.Run(params string[] a_args)
            {
                if (a_args.Length != 2)
                {
                    return "Invalid Argument Length!";
                }

                if (int.TryParse(a_args[0], out int health) == false)
                {
                    return "Invalid Health Argument: expected int!";
                }

                if (float.TryParse(a_args[1], out float damage) == false)
                {
                    return "Invalid Damage Argument: expected float!";
                }

                ExampleCommand(health, damage);
                return "Success";
            }


            static void ExampleCommand(int a_health, float damage)
            {

            }
        }

        public class KConsoleTestCommandCar : ICommand
        {
            string ICommand.Name { get; set; } = "Car";

            string ICommand.GetArgName(int a_argIndex)
            {
                switch (a_argIndex)
                {
                    case 0:
                        return "Health:int";
                    case 1:
                        return "Damage:float";
                }
                return string.Empty;
            }

            string ICommand.Run(params string[] a_args)
            {
                if (a_args.Length != 2)
                {
                    return "Invalid Argument Length!";
                }

                if (int.TryParse(a_args[0], out int health) == false)
                {
                    return "Invalid Health Argument: expected int!";
                }

                if (float.TryParse(a_args[1], out float damage) == false)
                {
                    return "Invalid Damage Argument: expected float!";
                }

                ExampleCommand(health, damage);
                return "Success";
            }


            static void ExampleCommand(int a_health, float damage)
            {

            }
        }

        public class KConsoleTestCommandCan : ICommand
        {
            string ICommand.Name { get; set; } = "Can";

            string ICommand.GetArgName(int a_argIndex)
            {
                return string.Empty;
            }

            string ICommand.Run(params string[] a_args)
            {
                return "Success";
            }
        }

        public class KConsoleTestCommandChrist : ICommand
        {
            string ICommand.Name { get; set; } = "Christ";

            string ICommand.GetArgName(int a_argIndex)
            {
                return string.Empty;
            }

            string ICommand.Run(params string[] a_args)
            {
                return "Success";
            }
        }

        public class KConsoleTestCommandChild : ICommand
        {
            string ICommand.Name { get; set; } = "Child";

            string ICommand.GetArgName(int a_argIndex)
            {
                return string.Empty;
            }

            string ICommand.Run(params string[] a_args)
            {
                return "Success";
            }
        }

        public class KConsoleTestCommandChill : ICommand
        {
            string ICommand.Name { get; set; } = "Chill";

            string ICommand.GetArgName(int a_argIndex)
            {
                return string.Empty;
            }

            string ICommand.Run(params string[] a_args)
            {
                return "Success";
            }
        }

        public class KConsoleTestCommandChilling : ICommand
        {
            string ICommand.Name { get; set; } = "Chilling";

            string ICommand.GetArgName(int a_argIndex)
            {
                return string.Empty;
            }

            string ICommand.Run(params string[] a_args)
            {
                return "Success";
            }
        }

        [SerializeField]
        private TMPro.TextMeshProUGUI _inputText;

        [SerializeField]
        private Color _predictionTextColour = Color.gray;
        private TMPro.TextMeshProUGUI _predictionText = null;
        private RectTransform _predictionTransform = null;

        private List<ICommand> _predictionCommands = new List<ICommand>(5);
        private ICommand _currentCommand = null;

        [SerializeField] 
        private TMPro.TMP_InputField _inputField;

        [SerializeField]
        private bool _rememberLastCommandOnOpen = true;

        private string _lastCommandName = "";

        public bool IsOpen => gameObject.activeSelf;

        private void Awake()
        {
            KConsole.Initialise(this, 100);

            bool bSuccess = KConsole.RegisterCommand(new KConsoleTestCommandCar());
            bSuccess = KConsole.RegisterCommand(new KConsoleTestCommandChrist());
            Debug.Assert(bSuccess, "Failed to Register Command");
            bSuccess = KConsole.RegisterCommand(new KConsoleTestCommandCan());
            Debug.Assert(bSuccess, "Failed to Register Command");
            bSuccess = KConsole.RegisterCommand(new KConsoleTestCommandChild());
            Debug.Assert(bSuccess, "Failed to Register Command");
            bSuccess = KConsole.RegisterCommand(new KConsoleTestCommandChildren());
            Debug.Assert(bSuccess, "Failed to Register Command");
            bSuccess = KConsole.RegisterCommand(new KConsoleTestCommandChill());
            Debug.Assert(bSuccess, "Failed to Register Command");
            bSuccess = KConsole.RegisterCommand(new KConsoleTestCommandChilling());
            Debug.Assert(bSuccess, "Failed to Register Command");

            ICommand bestMatch = KConsole.LookupBestMatch("c");
            Debug.Assert(bestMatch != null, "No Match!");

            List<ICommand> matchingCommands = new List<ICommand>(5);
            bSuccess =  KConsole.LookupBestMatches("c", ref matchingCommands);
            Debug.Assert(bSuccess, "Failed to Find Best Matches!");

            CreatePredictionObject();
        }

        private void CreatePredictionObject()
        {
            GameObject predictionGO = Instantiate(_inputText.gameObject, _inputText.transform.parent);
            predictionGO.transform.SetAsLastSibling();
            predictionGO.name = "TXT_Prediction";
            _predictionText = predictionGO.GetComponent<TMPro.TextMeshProUGUI>();
            _predictionText.text = "Test";
            _predictionTransform = (RectTransform)predictionGO.transform;
            _predictionText.color = _predictionTextColour;
            UpdatePredictionObjectOffset();
        }

        private void UpdatePredictionObjectOffset()
        {
            Vector2 position = new Vector2(_inputText.textBounds.size.x, _predictionTransform.anchoredPosition.y);
            _predictionTransform.anchoredPosition = position;
        }

        private void Update()
        {
            UpdatePredictionObjectOffset();

            EventSystem.current.SetSelectedGameObject(_inputField.gameObject);

            if (Input.GetKeyDown(KeyCode.Return))
            {
                // TODO Enter
            }
            else if (Input.GetKeyDown(KeyCode.Tab))
            {
                // TODO Auto Complete
            }
        }

        private void OnEnable()
        {
            if (_rememberLastCommandOnOpen)
            {
                _inputField.SetTextWithoutNotify(_lastCommandName);
            }
            else
            {
                _inputField.SetTextWithoutNotify("");
            }

            Transform parent = _inputField.transform.parent;
            if (parent)
            {
                Transform caretTransform = parent.GetChild(0);

                if (caretTransform)
                {
                    caretTransform.SetAsLastSibling();
                }
            }

            EventSystem.current.SetSelectedGameObject(_inputField.gameObject);
        }

        private void OnDisable()
        {

        }

        #region InputFieldCallbacks
        public void OnInputStringChanged()
        {
            Debug.Log("OnInputStringChanged");
            string input = _inputField.text;

            string[] inputStrings = input.Split(' ');

            if (string.IsNullOrWhiteSpace(input))
            {
                _currentCommand = null;
                _predictionText.text = "Type a Command...";
                return;
            }

            bool IsCommand = inputStrings.Length == 1;

            if (IsCommand)
            {
                bool bMatchFound  = KConsole.LookupBestMatches(input, ref _predictionCommands);

                if (bMatchFound)
                {
                    ICommand firstMatch = _predictionCommands[0];
                    string predictionText = firstMatch.Name.Substring(input.Length, firstMatch.Name.Length - input.Length);
                    Debug.Log(predictionText);
                    _predictionText.text = predictionText;
                    _currentCommand = firstMatch;
                }
                else
                {
                    _currentCommand = null;
                    _predictionText.text = string.Empty;
                }
                _predictionCommands.Clear();
            } 
            
            if(_currentCommand != null && string.IsNullOrWhiteSpace(_predictionText.text))// Arguments
            {
                string argName = _currentCommand.GetArgName(inputStrings.Length - 1);
                argName = argName.Insert(0, " ");
                _predictionText.text = argName;
            }
        }

        public void OnInputEndEdit()
        {
            string input = _inputField.text;

            ICommand bestMatch = KConsole.LookupBestMatch(input);
            if (bestMatch != null)
            {
                
            }
        }

        public void OnInputSelect()
        {
            Debug.Log("OnInputSelect");
        }

        public void OnInputDeselect()
        {
            Debug.Log("OnInputDeselect");
        }

        public void Open()
        {
            gameObject.SetActive(true);
        }

        public void Close()
        {
            gameObject.SetActive(false);
        }

        public void Enter()
        {
            
        }
        #endregion



    }
}

