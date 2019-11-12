using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.CompilerServices;

public struct CommandResult
{
    public CommandResult(string a_value)
    {
        Result = a_value;
        PrintColor = Color.white;
    }

    public CommandResult(string a_value, Color a_printColor)
    {
        Result = a_value;
        PrintColor = a_printColor;
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static CommandResult Default(string a_value) {return new CommandResult(a_value, Color.white);}
    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static CommandResult Error(string a_value) { return new CommandResult(a_value, Color.red); }

    public string Result;
    public Color PrintColor;
}

public interface ICommand
{
    string Name { get; }

    int ArgCount { get; }
    string GetArgName(int a_argIndex);
    CommandResult Run(params string[] a_args);
}

public interface IConsoleHandler
{
    bool IsOpen { get;}
    void Open();
    void Close();

    void OnWriteToConsole(string a_value, Color a_color);

    void OnVisualChange();
}

public static partial class KDebug
{
    public static class Console
    {
        private struct ConsoleHistory
        {
            public LogData Data;
            public ICommand Command;
            public Color PrintColor;

            public ConsoleHistory(string a_value, ICommand a_command, Color a_printColor)
            {
                Data = new LogData(a_value);
                Command = a_command;
                PrintColor = a_printColor;
            }

            public ConsoleHistory(LogData a_data, ICommand a_command, Color a_printColor)
            {
                Data = a_data;
                Command = a_command;
                PrintColor = a_printColor;
            }
        }

        private static readonly KTrie s_Tree = new KTrie();
        private static List<ICommand> s_RegisteredCommands = null;
        private static IConsoleHandler s_Handler = null;

        // Keybindings
        public static KeyCode ToggleOpenKeyCode
        {
            get
            {
                if (s_data != null)
                {
                    return s_data.ConsoleData.KeyCodeToggleOpen;
                }

                return KeyCode.None;
            }
        }

        private static KQueue<ConsoleHistory> s_ConsoleHistory = null;
        private static KQueue<ConsoleHistory> s_CommandHistory = null;

        private static int s_MaxHistory = 10;

        private static GameObject s_CommandContext = null;
        public static GameObject CommandContext
        {
            get => s_CommandContext;
            set => s_CommandContext = value;
        }

        private static bool Initialise(IConsoleHandler a_handler)
        {
            if (s_Initialised)
                return true;

            s_RegisteredCommands = new List<ICommand>(s_data.ConsoleData.MaxCommands);
            s_Handler = a_handler;

            s_ConsoleHistory = new KQueue<ConsoleHistory>(s_data.ConsoleData.MaxHistory);
            s_CommandHistory = new KQueue<ConsoleHistory>(s_data.ConsoleData.MaxHistory);
            s_MaxHistory = s_data.ConsoleData.MaxHistory;

            if(s_Handler.IsOpen)
                s_Handler.Close();

            s_Handler.OnVisualChange();

            return s_Initialised = true;
        }

        private static void Reset()
        {
            s_RegisteredCommands = null;
            s_Handler = null;
            s_ConsoleHistory = null;
            s_CommandHistory = null;
            s_MaxHistory = 0;
        }

        public static bool Exists(string a_string)
        {
            if (s_Initialised == false)
                return false;

            bool bExists = s_Tree.StringExists(a_string.ToLowerInvariant());

            return bExists;
        }

        public static bool RegisterCommand(ICommand a_command)
        {
            if (s_Initialised == false)
                return false;

            bool bSuccess = s_Tree.Insert(a_command.Name.ToLowerInvariant(), out int ID);

            if (bSuccess)
            {
                s_RegisteredCommands.Add(a_command);
            }

            return bSuccess;
        }

        public static ICommand LookupExactMatch(string a_string)
        {
            if (s_Initialised == false)
                return null;

            ICommand command = null;

            KTrie.ILookupQuery query = s_Tree.LookupExactMatch(a_string.ToLowerInvariant());
            if (query.IsValid)
            {
                command = s_RegisteredCommands[query.ID];
            }
            return command;
        }

        public static ICommand LookupBestMatch(string a_string)
        {
            if (s_Initialised == false)
                return null;

            ICommand command = null;

            KTrie.ILookupQuery query = s_Tree.LookupBestMatch(a_string.ToLowerInvariant());
            if (query.IsValid)
            {
                command = s_RegisteredCommands[query.ID];
            }
            return command;
        }

        private static List<KTrie.ILookupQuery> LookupListBuffer = new List<KTrie.ILookupQuery>(10);
        public static bool LookupBestMatches(string a_string, ref List<ICommand> a_list)
        {
            if (s_Initialised == false)
                return false;

            int matchCount = s_Tree.LookupBestMatches(a_string.ToLowerInvariant(), ref LookupListBuffer);

            for (int i = 0; i < matchCount; ++i)
            {
                int matchID = LookupListBuffer[i].ID;
                ICommand command = s_RegisteredCommands[matchID];
                if (command != null)
                {
                    a_list.Add(command);
                }
            }
            LookupListBuffer.Clear();

            return a_list.Count != 0;
        }

        public static void Toggle()
        {
            if (s_Handler.IsOpen)
            {
                s_Handler.Close();
                s_CommandContext = null;
            }
            else
            {
                s_Handler.Open();
            }
        }

        public static bool IsOpen()
        {
            return s_Handler.IsOpen;
        }

        public static void RunCommand(ICommand a_command, params string[] a_args)
        {
            CommandResult result = a_command.Run(a_args);
            
            WriteToHistory(new ConsoleHistory(result.Result, a_command, Color.white));

            s_Handler.OnWriteToConsole(result.Result, result.PrintColor);
        }

        public static void SetCommandContext(GameObject a_object)
        {
            s_CommandContext = a_object;
        }

        public static void WriteTo(string a_value)
        {
            if (s_Initialised == false)
                return;

            WriteToHistory(new ConsoleHistory(a_value, null, Color.white));
            s_Handler.OnWriteToConsole(a_value, Color.white);
        }

        public static void DumpHistoryToHandler()
        {
            for (int i = 0; i < s_ConsoleHistory.Count; ++i)
            {
                ConsoleHistory history = s_ConsoleHistory[i];
                s_Handler.OnWriteToConsole(history.Data.Value, history.PrintColor);
            }
        }

        private static void WriteToHistory(ConsoleHistory a_history)
        {
            if (s_ConsoleHistory.Count + 1 > s_MaxHistory)
            {
                ConsoleHistory history = s_ConsoleHistory.Dequeue();
                if (history.Command != null)
                {
                    s_CommandHistory.Dequeue();
                }
            }

            s_ConsoleHistory.Enqueue(a_history);
            if (a_history.Command != null)
            {
                s_CommandHistory.Enqueue(a_history);
            }
        }

        private static IEnumerable<string> EnumerateCommandHistory()
        {
            for (int i = 0; i < s_CommandHistory.Count; ++i)
            {
                yield return s_CommandHistory[i].Data.LogString;
            }
        }
    }
}