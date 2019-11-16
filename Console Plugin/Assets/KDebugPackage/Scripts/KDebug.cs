using System;

public partial class KDebug
{
    private static bool s_Initialised = false;
    private static KDebugData s_data;

    private static IPerformanceTracker s_Tracker = null;
    public static IPerformanceTracker Tracker => s_Tracker;

    public static VisualSchemeData GetVisualData => s_data.VisualData;

    private static readonly string s_logFilePath = UnityEngine.Application.persistentDataPath + "/" + "KDebugLog.log";

    private static ILog s_logFile = null;

    public static bool Initialise(KDebugData a_data, IConsoleHandler a_handler, IPerformanceTracker a_tracker, IDisplayHandler a_displayHandler)
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
        s_consoleImpl = new ConsoleImpl(a_handler);
        s_consoleImpl.OnAwake();

        // Init Debug Display Manager
        s_displayManagerImpl = new DebugDisplayManagerImpl(a_data.DisplayData, a_displayHandler);
        s_displayManagerImpl.OnAwake();

        TestCommands.Register();

        s_Tracker = a_tracker;
        s_Tracker.OnAwake();
        s_Initialised = true;
        return true;
    }

    public static void Update()
    {
        if (s_Initialised == false)
            return;

        s_Tracker.OnUpdate();
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

        LogData logData = new LogData(a_value);
        s_consoleImpl.WriteToHistory(new ConsoleHistory(logData, null));

        s_logFile.WriteLine(logData.PrintLog);
    }

}
