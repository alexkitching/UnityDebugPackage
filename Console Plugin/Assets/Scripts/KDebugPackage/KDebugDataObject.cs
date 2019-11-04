using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KDebugDataObject : MonoBehaviour
{
    [SerializeField]
    private KDebugData _data = null;
    public KDebugData Data => _data;

    public void Awake()
    {
        Debug.Assert(_data != null, "KDebugDataObject :: NO DATA REFERENCED!");
    }
}
