using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public interface DebugDisplayHandler
{
    void AddDisplay(DebugDisplay a_display);
    void RemoveDisplay(DebugDisplay a_display);
}

public static class KDebugDisplayManager
{
    private static DebugDisplayHandler s_Handler = null;

    private static readonly DebugTabbedDisplay s_PrimaryDisplay = new DebugTabbedDisplay();

    public static void Initialise(DebugDisplayHandler a_handler)
    {
        if (s_Handler != null)
            return;

        s_Handler = a_handler;
        s_Handler.AddDisplay(s_PrimaryDisplay);

        PerformanceDisplay performanceDisplay = new PerformanceDisplay(Color.blue, Color.red);
        RegisterDisplayAsPrimaryTab(performanceDisplay);
    }

    public static T RegisterDebugDisplay<T>() where T : DebugDisplay, new()
    {
        T type = new T();
        DebugDisplay display = type;

        s_Handler.AddDisplay(display);

        return type;
    }

    public static void RegisterDisplay(DebugDisplay a_display)
    {
        s_Handler.AddDisplay(a_display);
    }

    public static T RegisterDisplayAsPrimaryTab<T>() where T : DebugDisplay, new()
    {
        T type = new T();
        DebugDisplay display = type;

        s_PrimaryDisplay.AddTab(display);

        return type;
    }

    public static void RegisterDisplayAsPrimaryTab(DebugDisplay a_display)
    {
        s_PrimaryDisplay.AddTab(a_display);
    }

}