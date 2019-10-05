using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;


static class KDebug
{
    public static void Unreachable(string a_message)
    {
#if UNITY_5_3_OR_NEWER
    UnityEngine.Debug.Assert(false, a_message);
#else
        System.Diagnostics.Debug.Assert(false, a_message);
#endif
    }
}
