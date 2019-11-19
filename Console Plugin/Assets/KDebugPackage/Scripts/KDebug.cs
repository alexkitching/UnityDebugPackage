using System;
namespace KDebugPackage
{
    using Log;
    using Console;
    using Performance;
    using DebugDisplay;

    public partial class KDebug
    {
        private static bool s_Initialised = false;
        private static Data.PackageData s_data;
        public static Performance.IPerformanceTracker Tracker { get; private set; } = null;
        public static Data.VisualSchemeData GetVisualData => s_data.VisualData;

        private static readonly string s_logFilePath = UnityEngine.Application.persistentDataPath + "/" + "KDebugLog.log";

        private static ILog s_logFile = null;

        public static bool Initialise(Data.PackageData a_data, IConsoleHandler a_handler, IPerformanceTracker a_tracker, IDisplayHandler a_displayHandler)
        {
            s_data = a_data ?? throw new NullReferenceException("KDebug:: DEBUG DATA NULL");

            bool bResult = false;
            
            // Init Log
            bResult = InitialiseLog();
            if (bResult == false)
            {
                Reset();
                return false;
            }
            // Init Console
            s_consoleImpl = new ConsoleImpl(a_handler, s_data.ConsoleData);
            s_consoleImpl.OnAwake(s_data.ConsoleData);

            // Init Debug Display Manager
            s_displayManagerImpl = new DebugDisplayManagerImpl(a_data.DisplayData, a_displayHandler);
            s_displayManagerImpl.OnAwake();

            Tracker = a_tracker;
            Tracker.OnAwake();
            s_Initialised = true;
            return true;
        }

        public static void Update()
        {
            if (s_Initialised == false)
                return;

            Tracker.OnUpdate();
            s_consoleImpl.OnUpdate();
            s_displayManagerImpl.OnUpdate();
        }

        public static void OnGUI()
        {
            if (s_Initialised == false)
                return;

            s_displayManagerImpl.OnGUI();
        }

        public static void Shutdown()
        {
            Reset();
        }

        private static bool InitialiseLog()
        {
#if UNITY_STANDALONE
            s_logFile = new KWinLog();
#else
        throw new NotImplementedException();
#endif

            return s_logFile.Initialise(s_logFilePath);
        }

        private static void Reset()
        {
            s_Initialised = false;
            s_data = null;

            s_logFile?.Shutdown();

            s_logFile = null;

            s_consoleImpl = null;
            s_displayManagerImpl = null;
        }

        public static void Log(string a_value)
        {
            if (s_Initialised == false)
                return;
            
            LogData logData = new LogData(LogType.Log, a_value);
            s_logFile.WriteLine(logData.PrintLog);

            UnityEngine.Debug.Log(logData.Value);
            s_consoleImpl.WriteToHistory(logData);
        }

        public static void LogWarning(string a_value)
        {
            if (s_Initialised == false)
                return;

            LogData logData = new LogData(LogType.Warning, a_value);
            s_logFile.WriteLine(logData.PrintLog);

            UnityEngine.Debug.LogWarning(logData.Value);
            s_consoleImpl.WriteToHistory(logData);
        }

        public static void LogError(string a_value)
        {
            if (s_Initialised == false)
                return;

            LogData logData = new LogData(LogType.Error, a_value);
            s_logFile.WriteLine(logData.PrintLog);

            UnityEngine.Debug.LogError(logData.Value);
            s_consoleImpl.WriteToHistory(logData);
        }

        public static void Assert(bool a_condition)
        {
            if (s_Initialised == false)
                return;

            UnityEngine.Debug.Assert(a_condition);
            if (a_condition == false)
            {
                System.Diagnostics.StackTrace t = new System.Diagnostics.StackTrace();
                LogData data = new LogData(LogType.Assertion, "Assert Fail!" + "\n" + t);

                s_logFile.WriteLine(data.PrintLog);

                s_consoleImpl.WriteToHistory(data);
            }
        }

        public static void Assert(bool a_condition, string a_message)
        {
            if (s_Initialised == false)
                return;

            UnityEngine.Debug.Assert(a_condition, a_message);
            if (a_condition == false)
            {
                System.Diagnostics.StackTrace t = new System.Diagnostics.StackTrace();
                LogData data = new LogData(LogType.Assertion, a_message + "\n" + t);

                s_logFile.WriteLine(data.PrintLog);

                s_consoleImpl.WriteToHistory(data);
            }
        }

        public static void Unreachable(string a_message)
        {
            Assert(false, a_message);
        }

        public static void Break()
        {
            LogWarning("KDebug:: Break!");
            UnityEngine.Debug.Break();
        }
    }
}
