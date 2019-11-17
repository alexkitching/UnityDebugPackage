using System.Collections.Generic;
using UnityEngine;

namespace KDebugPackage
{
    using Console;

    public static partial class KDebug
    {
        // Implementation
        private static ConsoleImpl s_consoleImpl = null;

        // Public Static Interface Accessor
        public static class Console
        {
            // Keybindings
            public static KeyCode ToggleOpenKeyCode =>
                s_data != null ? s_data.ConsoleData.KeyCodeToggleOpen : KeyCode.None;

            // Command Context
            private static GameObject s_CommandContext = null;

            public static GameObject CommandContext
            {
                get => s_CommandContext;
                set => s_CommandContext = value;
            }

            #region Command Lookup/Registration

            public static bool Exists(string a_string)
            {
                return s_consoleImpl != null && s_consoleImpl.CommandLookup.CommandExists(a_string);
            }

            public static bool RegisterCommand(ICommand a_command)
            {
                return s_consoleImpl != null && s_consoleImpl.CommandLookup.RegisterCommand(a_command);
            }

            public static ICommand LookupExactMatch(string a_string)
            {
                return s_consoleImpl?.CommandLookup.LookupExactMatch(a_string);
            }

            public static ICommand LookupBestMatch(string a_string)
            {
                return s_consoleImpl?.CommandLookup.LookupBestMatch(a_string);
            }

            public static bool LookupBestMatches(string a_string, ref List<ICommand> a_list)
            {
                return s_consoleImpl != null && s_consoleImpl.CommandLookup.LookupBestMatches(a_string, ref a_list);

            }

            #endregion

            // Toggle Open/Closing of The Console
            public static void Toggle()
            {
                if (s_consoleImpl == null)
                    return;

                s_consoleImpl.Toggle();

                if (s_consoleImpl.IsOpen == false)
                {
                    s_CommandContext = null;
                }
            }

            // Is the Console Open?
            public static bool IsOpen()
            {
                return s_consoleImpl != null && s_consoleImpl.IsOpen;
            }

            public static void RunCommand(ICommand a_command, params string[] a_args)
            {
                if (s_consoleImpl == null)
                    return;

                // Run Command
                CommandResult result = a_command.Run(a_args);

                // Print result
                s_consoleImpl.WriteToHistory(new ConsoleHistory(result.Result, a_command));
            }

            public static void WriteTo(string a_value)
            {
                s_consoleImpl?.WriteToHistory(new ConsoleHistory(a_value, null));
            }

            public static void DumpHistoryToHandler()
            {
                s_consoleImpl?.DumpHistoryToHandler();
            }
        }
    }
}