using UnityEngine;

public class KDebugDataObject : MonoBehaviour
{
    [SerializeField]
    private KDebug.Data _data = null;
    public KDebug.Data Data => _data;

    public void Awake()
    {
        Debug.Assert(_data != null, "KDebugDataObject :: NO DATA REFERENCED!");
    }
}
