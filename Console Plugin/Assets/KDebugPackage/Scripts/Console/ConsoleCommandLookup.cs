using System.Collections.Generic;

public partial class KDebug
{
    private class ConsoleCommandLookup
    {
        private readonly KTrie _prefixTree = new KTrie();

        // Registration
        private readonly ICommand[] _registeredCommands = null;
        private int _nextCommandID = 0;

        private List<KTrie.ILookupQuery> _lookupListBuffer = new List<KTrie.ILookupQuery>(10);

        public ConsoleCommandLookup(int a_maxCommands)
        {
            _registeredCommands = new ICommand[a_maxCommands];
        }

        public bool RegisterCommand(ICommand a_command)
        {
            // Try Inserting Name to Tree
            bool bSuccess = _prefixTree.Insert(a_command.Name.ToLowerInvariant(), _nextCommandID);

            if (bSuccess) 
            {
                _registeredCommands[_nextCommandID++] = a_command; // Store Command in Array at index and increment next ID
            }

            return bSuccess;
        }

        public bool CommandExists(string a_commandName)
        {
            return _prefixTree.StringExists(a_commandName.ToLowerInvariant());
        }

        // Lookup a command with an exact matching name.
        public ICommand LookupExactMatch(string a_commandName)
        {
            ICommand command = null;
            KTrie.ILookupQuery query = _prefixTree.LookupExactMatch(a_commandName.ToLowerInvariant());

            if (query.IsValid) // Was a Command found within the Prefix Tree
            {
                command = _registeredCommands[query.ID]; 
            }

            return command;
        }

        // Lookup a command with a partial matching name.
        public ICommand LookupBestMatch(string a_commandName)
        {
            ICommand command = null;
            KTrie.ILookupQuery query = _prefixTree.LookupBestMatch(a_commandName.ToLowerInvariant());

            if (query.IsValid)
            {
                command = _registeredCommands[query.ID];
            }

            return command;
        }

        // Lookup command/s with a partial matching name.
        public bool LookupBestMatches(string a_string, ref List<ICommand> a_list)
        {
            int matchCount = _prefixTree.LookupBestMatches(a_string.ToLowerInvariant(), ref _lookupListBuffer);

            for (int i = 0; i < matchCount; ++i)
            {
                int matchID = _lookupListBuffer[i].ID;
                ICommand command = _registeredCommands[matchID];
                if (command != null)
                {
                    a_list.Add(command);
                }
            }
            _lookupListBuffer.Clear();

            return a_list.Count != 0;
        }
    }
}
