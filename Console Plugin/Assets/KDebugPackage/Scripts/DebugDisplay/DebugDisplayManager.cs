namespace KDebugPackage
{
    using DebugDisplay;
    public partial class KDebug
    {
        private static DebugDisplayManagerImpl s_displayManagerImpl = null;

        public static class DisplayManager
        {
            public static int MaxDisplays => s_displayManagerImpl?.MaxDisplays ?? 0;

            public static T RegisterDebugDisplay<T>() where T : DebugDisplayBase, new()
            {
                return s_displayManagerImpl?.RegisterDisplay<T>();
            }

            public static void RegisterDebugDisplay(DebugDisplayBase a_display)
            {
                s_displayManagerImpl?.RegisterDisplay(a_display);
            }

            public static T RegisterDisplayAsPrimaryTab<T>() where T : DebugDisplayBase, new()
            {
                return s_displayManagerImpl?.RegisterDisplayAsPrimaryTab<T>();
            }

            public static void RegisterDisplayAsPrimaryTab(DebugDisplayBase a_display)
            {
                s_displayManagerImpl?.RegisterDisplayAsPrimaryTab(a_display);
            }

            public static void CyclePrimaryTab(int a_dir)
            {
                s_displayManagerImpl?.CyclePrimaryTab(a_dir);
            }
        }
    }
}