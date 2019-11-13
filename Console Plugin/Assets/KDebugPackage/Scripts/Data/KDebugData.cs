using UnityEngine;

[System.Serializable]
public class VisualSchemeData
{
    public Color PrimaryColor;
    public Color SecondaryColor;
    public Color PrimaryTextColor;
    public Color SecondaryTextColor;

    // Console Specific
    public float HistoryBackerAlpha;
    public float PredictionTextAlpha;

    public static VisualSchemeData Default = new VisualSchemeData()
    {
        PrimaryColor = new Color(0f, 0f, 0f, 198f / 255f),
        SecondaryColor = new Color(66f / 255f, 64f / 255f, 128f / 255f, 255f / 255f),
        PrimaryTextColor = Color.white,
        SecondaryTextColor = Color.grey,
        HistoryBackerAlpha = 120f / 255f,
        PredictionTextAlpha   =  120f / 255f
    };
}

[System.Serializable]
public struct ConsoleData
{
    // Max Values
    public int MaxCommands;
    public int MaxHistory;
    public int MaxConsoleInput;

    // Input
    public KeyCode KeyCodeToggleOpen;

    public static ConsoleData Default = new ConsoleData() 
    { 
        MaxCommands = 100,
        MaxHistory = 10,
        MaxConsoleInput = 128,
        KeyCodeToggleOpen = KeyCode.BackQuote
    };
}

[System.Serializable]
public struct DisplayData
{
    public int MaxDisplays;

    public static DisplayData Default = new DisplayData()
    {
        MaxDisplays = 10
    };
}

[CreateAssetMenu(fileName = "KDebugData", menuName = "KDebug/KDebugData")]
public class KDebugData : ScriptableObject 
{
    public KDebugData()
    {
        ConsoleData = ConsoleData.Default;
        DisplayData = DisplayData.Default;
        VisualData = VisualSchemeData.Default;
    }

    // Console 
    public ConsoleData ConsoleData;
    public DisplayData DisplayData;
    public VisualSchemeData VisualData;
}
