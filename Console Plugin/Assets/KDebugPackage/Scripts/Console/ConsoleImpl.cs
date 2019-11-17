﻿namespace KDebugPackage.Console
{
    using Data;
    using Log;
    using DataStructures.Containers;
    struct ConsoleHistory
    {
        public LogData Data;
        public readonly ICommand Command;
        public bool HasValue => string.IsNullOrEmpty(Data.Value) == false;

        public ConsoleHistory(string a_value, ICommand a_command)
        {
            Data = new LogData(a_value);
            Command = a_command;
        }

        public ConsoleHistory(LogData a_data, ICommand a_command)
        {
            Data = a_data;
            Command = a_command;
        }
    }

    class ConsoleImpl
    {
        public ConsoleCommandLookup CommandLookup { get; } = null;

        // Handler
        private readonly IConsoleHandler s_Handler = null;
        public bool IsOpen => s_Handler?.IsOpen ?? false;

        // History
        private readonly KQueue<ConsoleHistory> s_ConsoleHistory = null;
        private readonly KQueue<ConsoleHistory> s_CommandHistory = null;
        private readonly int s_MaxHistory = 10;


        public ConsoleImpl(IConsoleHandler a_handler, ConsoleData a_data)
        {
            CommandLookup = new ConsoleCommandLookup(a_data.MaxCommands);
            s_Handler = a_handler;

            s_ConsoleHistory = new KQueue<ConsoleHistory>(a_data.MaxHistory);
            s_CommandHistory = new KQueue<ConsoleHistory>(a_data.MaxHistory);
            s_MaxHistory = a_data.MaxHistory;
        }

        /// <summary>
        /// Initialises the Console Handler
        /// </summary>
        public void OnAwake(ConsoleData a_data)
        {
            s_Handler.OnAwake(a_data);

            if (s_Handler.IsOpen) // Ensure Console is Closed
                s_Handler.Close();

            s_Handler.OnVisualChange();
        }

        public void OnUpdate()
        {
            if (s_Handler.IsOpen)
            {
                s_Handler.OnUpdate();
            }
        }

        /// <summary>
        /// Opens/Closes the Console
        /// </summary>
        public void Toggle()
        {
            if (s_Handler.IsOpen)
            {
                s_Handler.Close();
            }
            else
            {
                s_Handler.Open();
            }
        }

        /// <summary>
        /// Writes Console History to History Queue
        /// </summary>
        /// <param name="a_history">History to Write</param>
        public void WriteToHistory(ConsoleHistory a_history)
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

            s_Handler.OnWriteToConsole(a_history.Data.PrintLog);
        }

        /// <summary>
        /// Loops through console history and calls OnWriteToConsole on handler with history,
        /// called on opening the console.
        /// </summary>
        public void DumpHistoryToHandler()
        {
            for (int i = 0; i < s_ConsoleHistory.Count; ++i)
            {
                ConsoleHistory history = s_ConsoleHistory[i];
                if (history.HasValue)
                    s_Handler.OnWriteToConsole(history.Data.PrintLog);
            }
        }
    }
}