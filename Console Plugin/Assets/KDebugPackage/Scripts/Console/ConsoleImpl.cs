public static partial class KDebug
{
    private struct ConsoleHistory
    {
        public LogData Data;
        public readonly ICommand Command;

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

    private class ConsoleImpl
    {
        public ConsoleCommandLookup CommandLookup { get; } = null;

        // Handler
        private readonly IConsoleHandler s_Handler = null;
        public bool IsOpen => s_Handler?.IsOpen ?? false;

        // History
        private readonly KQueue<ConsoleHistory> s_ConsoleHistory = null;
        private readonly KQueue<ConsoleHistory> s_CommandHistory = null;
        private readonly int s_MaxHistory = 10;

        public ConsoleImpl(IConsoleHandler a_handler)
        {
            CommandLookup = new ConsoleCommandLookup(s_data.ConsoleData.MaxCommands);
            s_Handler = a_handler;

            s_ConsoleHistory = new KQueue<ConsoleHistory>(s_data.ConsoleData.MaxHistory);
            s_CommandHistory = new KQueue<ConsoleHistory>(s_data.ConsoleData.MaxHistory);
            s_MaxHistory = s_data.ConsoleData.MaxHistory;
        }

        public void OnAwake()
        {
            s_Handler.OnAwake(s_data.ConsoleData);

            if (s_Handler.IsOpen)
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

        public void DumpHistoryToHandler()
        {
            for (int i = 0; i < s_ConsoleHistory.Count; ++i)
            {
                ConsoleHistory history = s_ConsoleHistory[i];
                s_Handler.OnWriteToConsole(history.Data.PrintLog);
            }
        }
    }
}
