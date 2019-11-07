using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KDebugManager : MonoBehaviour
{
    [SerializeField] 
    private KDebugDataObject _dataObject = null;
    [SerializeField]
    private KConsoleWindow _consoleWindow = null;
    [SerializeField] 
    private KPerformanceTracker _performanceTracker = null;
    [SerializeField]
    private KDebugDisplayHandler _displayHandler = null;

    private void Awake()
    {
        if (_dataObject == null)
        {
            throw new NullReferenceException("Data object is null!");
        }

        KDebug.Initialise(_dataObject.Data, _consoleWindow, _performanceTracker, _displayHandler);
    }
}
