using UnityEngine;

namespace KDebugPackage.Data
{
    public class KDebugDataObject : MonoBehaviour
    {
        [SerializeField] private Data _data = null;
        public Data Data => _data;

        public void Awake()
        {
            Debug.Assert(_data != null, "KDebugDataObject :: NO DATA REFERENCED!");
        }
    }
}