using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.Assertions.Must;

public partial class KTrie
{

    #region LookupQuery Data
    public interface ILookupQuery
    {
        bool IsValid { get; }
        int ID { get; }
        string CompleteValue { get; }
    }

    private struct LookupQuery : ILookupQuery
    {
        public KTrieNode Node { get; }
        public bool IsPartial { get; }
        public int TotalMatchingChars { get; }
        public int MatchingChars { get; }

        public bool IsValid => Node != null;
        public int ID => Node.CompleteID;
        public string CompleteValue => Node.GetFinalValue();

        public bool IsComplete => Node.CompleteID != KTrieNode.InvalidCompleteID;
        
        public static readonly LookupQuery Invalid = new LookupQuery(null, false, 0, 0);

        public LookupQuery(KTrieNode a_node, bool a_partial, int a_totalMatchingChars, int a_matchingChars)
        {
            Node = a_node;
            IsPartial = a_partial;
            TotalMatchingChars = a_totalMatchingChars;
            MatchingChars = a_matchingChars;
        }
    }

    #endregion

    private readonly KTrieNode m_Root;
    private int m_nextCompleteID = 0;
    public int GetNewCompleteID => m_nextCompleteID++;

    #region Constructors

    public KTrie()
    {
        m_Root = new KTrieNode("#ROOT", null, 0, KTrieNode.InvalidCompleteID);
    }

    #endregion

    #region Public Functions

    public bool StringExists(string a_string)
    {
        KTrieNode node = LookupCompleteMatch(m_Root, a_string.ToLowerInvariant());
        return node != null;
    }

    public bool Insert(string a_string, out int a_id)
    {
        a_id = KTrieNode.InvalidCompleteID;
        string lowerString = a_string.ToLowerInvariant();

        LookupQuery query = LookupMatchForInsert(m_Root, lowerString);

        if (query.IsValid == false)
        {
            return false;
        }

        if (query.IsPartial == false)
        {
            // Already Exists
            return false;
        }

        int matchingChars = query.MatchingChars;

        if (query.TotalMatchingChars != 0 &&
            matchingChars != query.Node.Value.Length)
        {
            // Partial Match within node value - Split the node
            string nodeValue = query.Node.Value;
            string prefix = nodeValue.Substring(0, matchingChars);
            int postfixLen = nodeValue.Length - matchingChars;
            string postfix = nodeValue.Substring(matchingChars, postfixLen);

            int nodeCompleteID = query.Node.CompleteID;

            query.Node.CompleteID = KTrieNode.InvalidCompleteID;
            query.Node.Value = prefix;
            query.Node.Depth = query.Node.Parent.Depth + matchingChars;

            // Add new split child
            KTrieNode newChildNode = new KTrieNode(postfix, query.Node, query.Node.Depth + postfixLen, nodeCompleteID);

            if (query.Node.IsLeaf() == false) // Parent has Children
            {
                // Move Previous Children to new Child
                for (int i = 0; i < query.Node.Children.Count; ++i)
                {
                    newChildNode.Children.Add(query.Node.Children[i]);
                }
                // Clear Parents Children
                query.Node.Children.Clear();
            }

            // Add new Child node
            query.Node.Children.Add(newChildNode);
        }

        a_id = GetNewCompleteID;
        string postFix = lowerString.Substring(query.TotalMatchingChars, lowerString.Length - query.TotalMatchingChars);
        query.Node.Children.Add(new KTrieNode(postFix, query.Node, query.Node.Depth + postFix.Length, a_id));
        
        return true;
    }

    public ILookupQuery LookupBestMatch(string a_string)
    {
        LookupQuery query = LookupMatchIncludingPartialString(m_Root, a_string);

        if (query.IsValid)
        {
            if (query.IsComplete)
            {
                return query;
            }

            if (query.Node.IsLeaf() == false)
            {
                // Closest Match has children.
                int closestDepth = 9999999;
                KTrieNode closestNode = GetClosestCompleteMatchFromChildren(query.Node, ref closestDepth);
                if (closestNode != null)
                {
                    return new LookupQuery(closestNode, false, 0, 0);
                }
            }
        }
        return query;
    }

    public int LookupBestMatches(string a_string, ref List<ILookupQuery> a_matchList)
    {
        a_matchList.Clear();
        
        // Perform Initial Query for Partial/Full
        LookupQuery query = LookupMatchIncludingPartialString(m_Root, a_string);

        if (query.IsValid)
        {
            if (query.IsComplete)
            {
                a_matchList.Add(query);
            }

            if (query.Node.IsLeaf() == false)
            {
                // Closest Match has children.
                int maxClosestDepth = 9999999;

                GetClosestCompleteMatchesFromChildren(query.Node, ref maxClosestDepth, ref a_matchList);
            }
        }

        return a_matchList.Count;
    }

    #endregion

    private KTrieNode GetClosestCompleteMatchFromChildren(KTrieNode a_parent, ref int a_closestDepth)
    {
        if (a_parent.Depth > a_closestDepth)
            return null;

        KTrieNode closestNode = null;
        // Loop through initial Children
        for (int i = 0; i < a_parent.Children.Count; ++i)
        {
            KTrieNode child = a_parent.Children[i];

            if(child.CompleteID == KTrieNode.InvalidCompleteID)
                continue;

            if (child.Depth < a_closestDepth)
            {
                closestNode = child;
                a_closestDepth = child.Depth;
            }
        }

        if (closestNode != null)
            return closestNode;

        // We haven't found a single complete child
        for (int i = 0; i < a_parent.Children.Count; ++i)
        {
            KTrieNode child = a_parent.Children[i];

            KTrieNode closestChildChild = GetClosestCompleteMatchFromChildren(child, ref a_closestDepth);
            if (closestChildChild != null)
            {
                closestNode = closestChildChild;
            }
        }

        return closestNode;
    }

    private void GetClosestCompleteMatchesFromChildren(KTrieNode a_parent, ref int a_maxClosestDepth,
        ref List<ILookupQuery> a_matchList)
    {
        if (a_parent.Depth > a_maxClosestDepth)
            return;

        int maxMatches = a_matchList.Capacity;

        if (maxMatches == 0)
            return;

        // Loop through initial Children
        for (int i = 0; i < a_parent.Children.Count; ++i)
        {
            KTrieNode child = a_parent.Children[i];

            if(child.CompleteID == KTrieNode.InvalidCompleteID)
                continue;

            TryAddMatchToList(child, ref a_maxClosestDepth, ref a_matchList);
        }

        // We reached max Matches
        for (int i = 0; i < a_parent.Children.Count; ++i)
        {
            KTrieNode child = a_parent.Children[i];

            if (child.IsLeaf())
            {
                continue;
            }

            GetClosestCompleteMatchesFromChildren(child, ref a_maxClosestDepth, ref a_matchList);
        }
    }

    private void TryAddMatchToList(KTrieNode a_potentialMatch, ref int a_maxClosestDepth,
        ref List<ILookupQuery> a_matchList)
    {
        if (a_matchList.Count == 0) // Empty list - Add Immediately
        {
            a_matchList.Add(new LookupQuery(a_potentialMatch, false, 0, 0));
            return;
        }

        // List not empty - compare and try to insert in list
        bool bUpdateCapacity = false;

        int maxMatches = a_matchList.Capacity;
        for (int j = 0; j < a_matchList.Count; ++j)
        {
            LookupQuery match = (LookupQuery)a_matchList[j];
            int currentMatchCount = a_matchList.Count;

            bool bIsCapacityMatch = j == maxMatches - 1; // Are we the last match at capacity

            if (match.Node.Depth == a_potentialMatch.Depth ) // Depth is equal
            {
                if (currentMatchCount == maxMatches &&
                    bIsCapacityMatch == false) // Max Capacity but not last
                {
                    a_matchList.RemoveAt(maxMatches - 1); // Remove last and update capacity
                    bUpdateCapacity = true;
                }

                // Insert new Match after existing
                a_matchList.Insert(j + 1, new LookupQuery(a_potentialMatch, false, 0, 0));
                break;
            }
            else if (match.Node.Depth > a_potentialMatch.Depth) // Match is worst than current Child
            {
                if (j < a_matchList.Count - 1) // Another match is still to compare
                {
                    LookupQuery nextMatch = (LookupQuery)a_matchList[j];
                    if (nextMatch.Node.Depth > a_potentialMatch.Depth) // The next match is also worse, move along
                    {
                        continue;
                    }
                }

                if (currentMatchCount == maxMatches) // We are at max matches, remove old
                {
                    a_matchList.RemoveAt(j);
                }

                LookupQuery newMatch = new LookupQuery(a_potentialMatch, false, 0, 0);

                a_matchList.Insert(j, newMatch);

                if (bIsCapacityMatch) // We have just inserted a new max closest depth match
                {
                    bUpdateCapacity = true;
                }

                break;
            }
            else if(currentMatchCount != maxMatches && // Not at capacity yet, and we're at last
                    j == a_matchList.Count - 1)
            {
                a_matchList.Add(new LookupQuery(a_potentialMatch, false, 0, 0));
                break;
            }
        }

        if (bUpdateCapacity)
        {
            LookupQuery newMax = (LookupQuery)a_matchList[maxMatches - 1];
            a_maxClosestDepth = newMax.Node.Depth;
        }
    }

    /// <summary>
    /// Returns First Complete match from string
    /// </summary>
    /// <param name="a_startNode"> Node to Start Lookup From </param>
    /// <param name="a_string"> The String to Match</param>
    /// <returns> Valid Node if Match is found </returns>
    private static KTrieNode LookupCompleteMatch(KTrieNode a_startNode, string a_string)
    {
        KTrieNode currentNode = a_startNode;
        string findString = a_string;

        while (currentNode != null)
        {
            KTrieNode.MatchResult matchingResult = currentNode.GetMatchingChild(a_string);

            if (matchingResult.MatchType == KTrieNode.MatchType.None ||
                matchingResult.MatchType == KTrieNode.MatchType.PartialNode)
            {
                return null;
            }

            currentNode = matchingResult.Node;

            if (matchingResult.MatchType == KTrieNode.MatchType.PartialString &&
                currentNode.IsLeaf() == false)
            {
                // Partial Match and Children Present - Evaluate them
                int startIndex = matchingResult.MatchCount;
                int subStrLen = findString.Length - startIndex;
                findString = findString.Substring(startIndex, subStrLen);
            }
            else if(matchingResult.MatchType == KTrieNode.MatchType.Full &&
                    currentNode.CompleteID != KTrieNode.InvalidCompleteID) // Full Complete Match
            {
                return currentNode;
            }
        }

        return null;
    }

    /// <summary>
    /// Returns First Complete Match from string including Partial String Matches
    /// </summary>
    /// <param name="a_startNode"> Node to Start Lookup From</param>
    /// <param name="a_string"> The String to Match</param>
    /// <returns> Lookup Query with Results </returns>
    private static LookupQuery LookupMatchIncludingPartialString(KTrieNode a_startNode, string a_string)
    {
        KTrieNode currentNode = a_startNode;
        string findString = a_string;

        int totalMatchingChars = 0;
        while (currentNode != null)
        {
            KTrieNode.MatchResult matchingResult = currentNode.GetMatchingChild(findString);

            if (matchingResult.MatchType == KTrieNode.MatchType.None)
            {
                return LookupQuery.Invalid;
            }

            currentNode = matchingResult.Node;
            totalMatchingChars += matchingResult.MatchCount;

            if(matchingResult.MatchType == KTrieNode.MatchType.Full) // Found Complete Match
            {
                return new LookupQuery(currentNode, false, totalMatchingChars, matchingResult.MatchCount);
            }

            // Allow Complete Partial Node Matches
            if (matchingResult.MatchType == KTrieNode.MatchType.PartialNode)
            {
                if (matchingResult.Node.CompleteID != KTrieNode.InvalidCompleteID ||
                    matchingResult.MatchCount == findString.Length)
                {
                    return new LookupQuery(currentNode, true, totalMatchingChars, matchingResult.MatchCount);
                }
            }

            if (matchingResult.MatchType == KTrieNode.MatchType.PartialString &&
                currentNode.IsLeaf() == false) // Partial Match
            {
                // Partial Match and Children Present - Evaluate them
                int startIndex = matchingResult.MatchCount;
                int subStrLen = findString.Length - startIndex;
                findString = findString.Substring(startIndex, subStrLen);
            }
        }

        return LookupQuery.Invalid;
    }

    private static LookupQuery LookupMatchForInsert(KTrieNode a_startNode, string a_string)
    {
        KTrieNode lastNode = null;
        KTrieNode currentNode = a_startNode;

        int totalMatchingChars = 0;
        int lastMatchCount = 0;

        string findString = a_string;

        while (currentNode != null)
        {
            lastNode = currentNode;

            KTrieNode.MatchResult matchingResult = currentNode.GetMatchingChild(findString);

            currentNode = matchingResult.Node;
            totalMatchingChars += matchingResult.MatchCount;

            if (matchingResult.MatchType == KTrieNode.MatchType.Full)
            {
                return LookupQuery.Invalid;
            }

            if (matchingResult.MatchType == KTrieNode.MatchType.None)
            {
                return new LookupQuery(lastNode, true, totalMatchingChars, lastMatchCount);
            }

            if (matchingResult.MatchType == KTrieNode.MatchType.Partial ||
                matchingResult.MatchType == KTrieNode.MatchType.PartialNode)
            {
                return new LookupQuery(currentNode, true, totalMatchingChars, matchingResult.MatchCount);
            }

            if (matchingResult.MatchType == KTrieNode.MatchType.PartialString)
            {
                if (currentNode.IsLeaf() == false)
                {
                    int startIndex = matchingResult.MatchCount;
                    int subStrLen = findString.Length - startIndex;

                    findString = findString.Substring(startIndex, subStrLen);
                }
                else // No Valid Nodes
                {
                    return new LookupQuery(currentNode, true, totalMatchingChars, matchingResult.MatchCount);
                }
            }

            lastMatchCount = matchingResult.MatchCount;
        }

        return LookupQuery.Invalid;
    }



    #region Helper Functions

    #endregion
}
