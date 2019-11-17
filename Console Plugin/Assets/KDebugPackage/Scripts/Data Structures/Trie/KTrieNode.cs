using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public partial class KDebug
{
    public partial class KTrie
    {
        private class Node
        {
            public string Value { get; set; }
            public List<Node> Children { get; set; }
            public Node Parent { get; set; }
            public int Depth { get; set; }
            public int CompleteID { get; set; }

            public static int InvalidCompleteID = -800001;

            public Node(string a_value, Node a_parent, int a_depth, int a_completeId)
            {
                Value = a_value;
                Children = new List<Node>();
                Parent = a_parent;
                Depth = a_depth;
                CompleteID = a_completeId;
            }

            public bool IsLeaf()
            {
                return Children.Count == 0;
            }

            public void DeleteChild(string a_value)
            {
                for (int i = 0; i < Children.Count; ++i)
                {
                    if (Children[i].Value == a_value)
                    {
                        Children.RemoveAt(i);
                        break;
                    }
                }
            }

            public enum MatchType
            {
                None,
                PartialNode,
                PartialString,
                Partial,
                Full
            }

            public struct MatchResult
            {
                public Node Node { get; }
                public MatchType MatchType { get; }
                public int MatchCount { get; }

                public MatchResult(Node a_node, MatchType a_type, int a_count)
                {
                    Node = a_node;
                    MatchType = a_type;
                    MatchCount = a_count;
                }

                public static MatchResult None = new MatchResult(null, MatchType.None, 0);
            }

            public MatchResult GetMatchingChild(string a_string)
            {
                for (int i = 0; i < Children.Count; ++i)
                {
                    Node child = Children[i];

                    MatchType matchType = child.IsMatch(a_string, out int matchCount);

                    if (matchType == MatchType.None)
                    {
                        continue;
                    }

                    return new MatchResult(child, matchType, matchCount);
                }

                return MatchResult.None;
            }


            private MatchType IsMatch(string a_string, out int o_MatchCount)
            {
                o_MatchCount = 0;
                int matchingChars;

                int len = Value.Length < a_string.Length ? Value.Length : a_string.Length;

                for (matchingChars = 0; matchingChars < len; ++matchingChars)
                {
                    if (Value[matchingChars] != a_string[matchingChars])
                    {
                        break;
                    }
                }

                o_MatchCount = matchingChars;
                bool bPartialString = o_MatchCount != a_string.Length;
                bool bPartialNode = o_MatchCount != Value.Length;

                if (o_MatchCount == 0)
                {
                    return MatchType.None;
                }

                if (a_string.Length == Value.Length && // Values are Equal Length, Match count is equal
                    o_MatchCount == len)
                {
                    return MatchType.Full;
                }

                if (bPartialNode && bPartialString)
                {
                    return MatchType.Partial;
                }

                if (bPartialNode)
                {
                    return MatchType.PartialNode;
                }

                if (bPartialString)
                {
                    return MatchType.PartialString;
                }

                Debug.Assert(false, " Shouldn't reach here ");
                return MatchType.None;
            }

            public string GetFinalValue()
            {
                string value = string.Empty;

                Node currentNode = this;
                while (true)
                {
                    Node parentNode = currentNode.Parent;
                    if (parentNode == null)
                    {
                        // We must be the root.
                        break;
                    }

                    value = value.Insert(0, currentNode.Value);
                    currentNode = parentNode;
                }

                return value;
            }
        }
    }
}