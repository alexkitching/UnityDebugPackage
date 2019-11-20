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
            ToggleConsole();
        }

        if (Input.GetKeyDown(KeyCode.PageUp))
        {
            CyclePrimaryTab(1);
        }
        else if (Input.GetKeyDown(KeyCode.PageDown))
        {
            CyclePrimaryTab(-1);
        }
    }

    public void ToggleConsole()
    {
        KDebug.Console.Toggle();
    }

    public void CyclePrimaryTab(int a_dir)
    {
        KDebug.DisplayManager.CyclePrimaryTab(a_dir);
    }
}
