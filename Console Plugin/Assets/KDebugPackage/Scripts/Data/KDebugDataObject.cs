using UnityEngine;

namespace KDebugPackage.Data
{
    public class KDebugDataObject : MonoBehaviour
    {
        [SerializeField]
        private PackageData _data = null;
        public PackageData Data => _data;

        public void Awake()
        {
            Debug.Assert(_data != null, "KDebugDataObject :: NO DATA REFERENCED!");
        }
    }
}