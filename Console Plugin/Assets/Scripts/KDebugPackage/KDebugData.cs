using UnityEngine;

[System.Serializable]
public struct VisualSchemeData
{
    public Color PrimaryColor;
    public Color SecondaryColor;
    public Color PrimaryTextColor;
    public Color SecondaryTextColor;

    // Console Specific
    public float PredictionTextAlpha;

    public static VisualSchemeData Default = new VisualSchemeData()
    {
        PrimaryColor = new Color(0f, 0f, 0f, 198f / 255f),
        SecondaryColor = new Color(66f / 255f, 64f / 255f, 128f / 255f, 255f / 255f),
        PrimaryTextColor = Color.white,
        SecondaryTextColor = Color.grey,
        PredictionTextAlpha   =  215f / 255f
    };
}

[System.Serializable]
public struct ConsoleData
{
    // Max Values
    public int MaxCommands;
    public int MaxHistory;

    // Input
    public KeyCode KeyCodeToggleOpen;

    public static ConsoleData Default = new ConsoleData() 
    { 
        MaxCommands = 100,
        MaxHistory = 10,
        KeyCodeToggleOpen = KeyCode.BackQuote
    };
}

[CreateAssetMenu(fileName = "KDebugData", menuName = "KDebug/KDebugData")]
public class KDebugData : ScriptableObject 
{
    public KDebugData()
    {
        ConsoleData = ConsoleData.Default;
        VisualData = VisualSchemeData.Default;
    }

    // Console 
    public ConsoleData ConsoleData;
    public VisualSchemeData VisualData;
}
