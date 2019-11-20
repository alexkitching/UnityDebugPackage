using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using KDebugPackage;

public class ConsoleInputListener : MonoBehaviour
{
    [SerializeField]
    private KConsoleWindow console = null;

    private void Awake()
    {
        if (console == null)
        {
            console = FindObjectOfType<KConsoleWindow>();
        }
        KDebug.Assert(console != null, "ConsoleInputListener:: Console reference is Null!!");
    }

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

        if (console.IsOpen == false)
        {
            return;
        }

        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            console.CyclePredictionItem(1);
        }
        else if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            console.CyclePredictionItem(-1);
        }

        if (Input.GetKeyDown(KeyCode.Tab))
        {
            console.Tab();
        }

        if (Input.GetMouseButtonDown(0))
        {
            console.UpdateContext(Input.mousePosition);
        }

        if (Input.GetKeyDown(KeyCode.Return) ||
            Input.GetKeyDown(KeyCode.KeypadEnter))
        {
            console.Return();
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
