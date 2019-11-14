using UnityEngine;

public static class ExampleStats
{
    public static float s_Health = 100;
    public static float s_Mana = 100;

    public static Transform s_Transform => Camera.main?.transform;

    public static Camera s_OverrideCam;
    
    public static Camera s_ActiveCam => s_OverrideCam != null ? s_OverrideCam : Camera.main;
}
