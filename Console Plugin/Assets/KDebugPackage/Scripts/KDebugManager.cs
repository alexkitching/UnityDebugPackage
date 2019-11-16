using System;
using UnityEngine;

public class KDebugManager : MonoBehaviour
{
    [SerializeField] 
    private KDebugDataObject _dataObject = null;
    [SerializeField]
    private KConsoleWindow _consoleWindow = null;
    [SerializeField]
    private KDebugDisplayHandler _displayHandler = null;

    private void Awake()
    {
        if (_dataObject == null)
        {
            throw new NullReferenceException("Data object is null!");
        }
        DontDestroyOnLoad(this);

        // Init KDebug
        KDebug.Initialise(_dataObject.Data, _consoleWindow, new KPerformanceTracker(), _displayHandler);
    }

    private void Update()
    {
        KDebug.Update();
    }

    private void OnGUI()
    {
        KDebug.OnGUI();
    }

    private void OnDestroy()
    {
        KDebug.Shutdown();
    }
}
