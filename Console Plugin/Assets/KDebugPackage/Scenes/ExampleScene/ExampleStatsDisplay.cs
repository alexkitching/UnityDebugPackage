using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExampleStatsDisplay : DebugDisplay
{
    public override void OnGUI()
    {
        DrawText("Player Stats:", true);
        DrawText("Health: " + ExampleStats.s_Health);
        DrawText("Mana: " + ExampleStats.s_Mana);
        DrawText("Alive: " + (ExampleStats.s_Health > 0f));
    }
}
