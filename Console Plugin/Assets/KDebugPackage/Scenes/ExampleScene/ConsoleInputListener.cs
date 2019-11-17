using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using KDebugPackage;

public class ConsoleInputListener : MonoBehaviour
{
    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KDebug.Console.ToggleOpenKeyCode))
        {
            KDebug.Console.Toggle();
        }

        if (Input.GetKeyDown(KeyCode.PageUp))
        {
            KDebug.DisplayManager.CyclePrimaryTab(1);
        }
        else if (Input.GetKeyDown(KeyCode.PageDown))
        {
            KDebug.DisplayManager.CyclePrimaryTab(-1);
        }
    }
}
