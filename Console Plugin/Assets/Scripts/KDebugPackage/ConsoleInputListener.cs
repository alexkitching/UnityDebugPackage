using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConsoleInputListener : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        //for (int i = 0; i < (int)KeyCode.Joystick8Button19; ++i)
        //{
        //    if (Input.GetKeyDown((KeyCode) i))
        //    {
        //        Debug.Log("Keycode: " + (KeyCode)i + " down!");
        //    }
        //}

        if (Input.GetKeyDown(KDebug.Console.ToggleOpenKeyCode))
        {
            KDebug.Console.Toggle();
        }

        if (Input.GetKeyDown(KeyCode.PageUp))
        {
            KDebugDisplayManager.CyclePrimaryTab(1);
        }
        else if (Input.GetKeyDown(KeyCode.PageDown))
        {
            KDebugDisplayManager.CyclePrimaryTab(-1);
        }
    }
}
