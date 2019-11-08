using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ExampleStats
{
    public static float s_Health = 100;
    public static float s_Mana = 100;

    public static Transform s_Transform => Camera.main?.transform;
}
