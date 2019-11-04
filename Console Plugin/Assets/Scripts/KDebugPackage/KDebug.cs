using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public partial class KDebug
{
    private static bool s_Initialised = false;
    private static KDebugData s_data;

    private static IPerformanceTracker s_Tracker = null;
    public static IPerformanceTracker Tracker => s_Tracker;

    public static bool Initialise(KDebugData a_data, IConsoleHandler a_handler, IPerformanceTracker a_tracker, DisplayHandler a_displayHandler)
    {
        s_data = a_data ?? throw new NullReferenceException("KDebug:: DEBUG DATA NULL");

        bool bResult = false;

        // Init Console
        bResult = InitialiseConsole(a_handler);

        if (bResult == false)
        {
            Reset();
            return false;
        }

        // Init Debug Display Manager
        bResult = InitialiseDisplayManager(a_displayHandler);

        if (bResult == false)
        {
            Reset();
            return false;
        }

        TestCommands.Register();

        s_Tracker = a_tracker;
        s_Initialised = true;
        return true;
    }

    private static bool InitialiseConsole(IConsoleHandler a_handler)
    {
        Type consoleType =  typeof(Console);

        MethodInfo consoleInitMethodInfo = consoleType.GetMethod(  "Initialise",
            BindingFlags.Static |
            BindingFlags.Public |
            BindingFlags.NonPublic);

        if (consoleInitMethodInfo == null)
            return false;

        return (bool)consoleInitMethodInfo?.Invoke(null, new object[] {a_handler});
    }

    private static bool InitialiseDisplayManager(DisplayHandler a_displayHandler)
    {
        Type dispMgrT = typeof(DisplayManager);
        MethodInfo dispMgrMthdInfo = dispMgrT.GetMethod("Initialise", 
            BindingFlags.Static |
            BindingFlags.Public |
            BindingFlags.NonPublic);

        return (bool)dispMgrMthdInfo?.Invoke(null, new object[] {a_displayHandler});
    }

    private static void Reset()
    {
        s_Initialised = false;
        s_data = null;
        Type consoleType =  typeof(Console);
        MethodInfo consoleResetMethodInfo =
            consoleType.GetMethod(  "Reset",
                BindingFlags.Static |
                BindingFlags.Public |
                BindingFlags.NonPublic);

        consoleResetMethodInfo?.Invoke(null, null);
    }
}
