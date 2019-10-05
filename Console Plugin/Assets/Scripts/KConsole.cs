using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace KConsole
{
    public interface ICommand
    {
        string Name { get; set; }

        string GetArgName(int a_argIndex);
        string Run(params string[] a_args);
    }

    public interface IConsoleHandler
    {
        bool IsOpen { get;}
        void Open();
        void Close();
    }

    public static class KConsole
    {
        private static bool s_Initialised = false;


        private static readonly KTrie s_Tree = new KTrie();
        private static List<ICommand> s_RegisteredCommands = null;
        private static IConsoleHandler s_Handler = null;

        public static bool Initialise(IConsoleHandler a_handler, int a_maxCommands)
        {
            if (s_Initialised)
                return true;

            s_RegisteredCommands = new List<ICommand>(a_maxCommands);
            s_Handler = a_handler;

            if(s_Handler.IsOpen)
                s_Handler.Close();

            return s_Initialised = true;
        }

        public static bool Exists(string a_string)
        {
            if (s_Initialised == false)
                return false;

            bool bExists = s_Tree.StringExists(a_string);

            return bExists;
        }

        public static bool RegisterCommand(ICommand a_command)
        {
            if (s_Initialised == false)
                return false;

            bool bSuccess = s_Tree.Insert(a_command.Name, out int ID);

            if (bSuccess)
            {
                s_RegisteredCommands.Add(a_command);
            }

            return bSuccess;
        }

        public static ICommand LookupBestMatch(string a_string)
        {
            if (s_Initialised == false)
                return null;

            ICommand command = null;

            KTrie.ILookupQuery query = s_Tree.LookupBestMatch(a_string);
            if (query.IsValid)
            {
                command = s_RegisteredCommands[query.ID];
            }
            return command;
        }

        public static bool LookupBestMatches(string a_string, ref List<ICommand> a_list)
        {
            if (s_Initialised == false)
                return false;

            List<KTrie.ILookupQuery> matchList = new List<KTrie.ILookupQuery>(a_list.Capacity);
            int matchCount = s_Tree.LookupBestMatches(a_string, ref matchList);

            for (int i = 0; i < matchCount; ++i)
            {
                int matchID = matchList[i].ID;
                ICommand command = s_RegisteredCommands[matchID];
                if (command != null)
                {
                    a_list.Add(command);
                }
            }

            return a_list.Count != 0;
        }

        public static void Toggle()
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
    }
}

