using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using KDebugPackage.DebugDisplay;

public class TutorialWindow : DebugDisplayBase
{
    public override void OnGUI()
    {
        DrawText("Example Commands: ", true, DefaultFontColour);
        DrawText("Press Tilde to bring up the console.");
        DrawText("<------------------------------------------>");
        DrawText("SpawnCube");
        DrawText("SpawnCube");

        DrawText("<------ Debug Display Hooked Examples ----->");
        DrawText("Cycle Debug Display Tabs with Pageup/Down.");
        DrawText("<------------------------------------------>");
        DrawText("AddHealth");
        DrawText("AddMana");
        DrawText("Kill");
        DrawText("<------------------------------------------>");

        DrawText("Noclip");

        DrawText("<------ Game Object Context Examples ------>");
        DrawText("Click on an Object with the Console up to perform command on the object.");
        DrawText("<------------------------------------------>");
        DrawText("SetPosition");
        DrawText("Translate");
        DrawText("SetRotation");
        DrawText("<------------------------------------------>");
        DrawText("CreateGarbage");
        DrawText("Log");
    }
}
