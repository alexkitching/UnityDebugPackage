using System.Runtime.CompilerServices;
using UnityEditor;

namespace KDebugPackage.Console
{
    using Data;
    using Log;
    using DataStructures.Containers;

    class ConsoleImpl
    {
        public ConsoleCommandLookup CommandLookup { get; } = null;

        // Handler
        private readonly IConsoleHandler s_Handler = null;
        public bool IsOpen => s_Handler?.IsOpen ?? false;

        // History
        private readonly KQueue<LogData> s_ConsoleHistory = null;
        private readonly KQueue<ICommand> s_CommandHistory = null;
        private readonly int s_MaxHistory = 10;

        public ConsoleImpl(IConsoleHandler a_handler, ConsoleData a_data)
        {
            CommandLookup = new ConsoleCommandLookup(a_data.MaxCommands);
            s_Handler = a_handler;

            s_ConsoleHistory = new KQueue<LogData>(a_data.MaxHistory);
            s_CommandHistory = new KQueue<ICommand>(a_data.MaxHistory);
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

            // Apply Visual Scheme
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
        public void WriteToHistory(LogData a_data, ICommand a_command = null)
        {
            if (a_data.HasValue)
            {
                if (s_ConsoleHistory.Count + 1 > s_MaxHistory)
                {
                    s_ConsoleHistory.Dequeue();
                }

                s_ConsoleHistory.Enqueue(a_data);

                s_Handler.OnWriteToConsole(FormatPrintLog(a_data));
            }

            if (a_command != null)
            {
                if (s_CommandHistory.Count + 1 > s_MaxHistory)
                {
                    s_CommandHistory.Dequeue();
                }

                s_CommandHistory.Enqueue(a_command);
            }
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        private static string FormatPrintLog(LogData a_data)
        {
            switch (a_data.Type)
            {
                default:
                    return "<color=white>" + a_data.PrintLog;
                case LogType.Warning:
                    return "<color=yellow>" + a_data.PrintLog;
                case LogType.Error:
                case LogType.Assertion:
                    return "<color=red>" + a_data.PrintLog;
            }
        }

        /// <summary>
        /// Loops through console history and calls OnWriteToConsole on handler with history,
        /// called on opening the console.
        /// </summary>
        public void DumpHistoryToHandler()
        {
            for (int i = 0; i < s_ConsoleHistory.Count; ++i)
            {
                LogData history = s_ConsoleHistory[i];
                if (history.HasValue)
                    s_Handler.OnWriteToConsole(FormatPrintLog(history));
            }
        }
    }
}