namespace KDebugPackage.DataStructures.Trie
{
    public partial class KTrie
    {
        public interface ILookupQuery
        {
            bool IsValid { get; }
            int ID { get; }
            string CompleteValue { get; }
        }

        private struct LookupQuery : ILookupQuery
        {
            public Node Node { get; }
            public bool IsPartial { get; }
            public int TotalMatchingChars { get; }
            public int MatchingChars { get; }

            public bool IsValid => Node != null;
            public int ID => Node.CompleteID;
            public string CompleteValue => Node.GetFinalValue();

            public bool IsComplete => Node.CompleteID != Node.InvalidCompleteID;

            public static readonly LookupQuery Invalid = new LookupQuery(null, false, 0, 0);

            public LookupQuery(Node a_node, bool a_partial, int a_totalMatchingChars, int a_matchingChars)
            {
                Node = a_node;
                IsPartial = a_partial;
                TotalMatchingChars = a_totalMatchingChars;
                MatchingChars = a_matchingChars;
            }
        }
    }
}