using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public partial class KDebug
{
    public interface DisplayHandler
    {
        void OnAwake();
        void OnUpdate();
        void OnGUI();

        void AddDisplay(DebugDisplay a_display);
        void RemoveDisplay(DebugDisplay a_display);
        void OnVisualChange();
    }

    public class TestDisplay : DebugDisplay
    {
        public override void OnGUI()
        {
            DrawText("Test Display.");
        }
    }

    public static class DisplayManager
    {
        private static DisplayHandler s_Handler = null;

        private static readonly DebugTabbedDisplay s_PrimaryDisplay = new DebugTabbedDisplay();
        private static int s_maxDisplays = 1;
        public static int MaxDisplays => s_maxDisplays;
        public static bool Initialise(DisplayData a_data, DisplayHandler a_handler)
        {
            if (s_Handler != null)
                return false;
            s_maxDisplays = a_data.MaxDisplays;
            s_Handler = a_handler;
            s_Handler.OnAwake();
            s_Handler.AddDisplay(s_PrimaryDisplay);
            return true;
        }

        public static void Update()
        {
            if (s_Initialised == false)
                return;

            s_Handler.OnUpdate();
        }

        public static void OnGUI()
        {
            if (s_Initialised == false)
                return;

            s_Handler.OnGUI();
        }

        private static void Reset()
        {
            s_Handler = null;
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

        public static void CyclePrimaryTab(int direction)
        {
            if (direction > 0)
            {
                s_PrimaryDisplay.NextTab();
            }
            else if (direction < 0)
            {
                s_PrimaryDisplay.PreviousTab();
            }
        }
    }
}
