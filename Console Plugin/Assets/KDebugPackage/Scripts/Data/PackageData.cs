using UnityEngine;

namespace KDebugPackage.Data
{
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
            SecondaryColor = new Color(224f / 255f, 137f / 255f, 14f / 255f, 255f / 255f),
            PrimaryTextColor = Color.white,
            SecondaryTextColor = Color.grey,
            HistoryBackerAlpha = 120f / 255f,
            PredictionTextAlpha = 76.5f / 255f
        };
    }

    [System.Serializable]
    public class ConsoleData
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
    public class DisplayData
    {
        public int MaxDisplays;

        public static DisplayData Default = new DisplayData()
        {
            MaxDisplays = 10
        };
    }


    [CreateAssetMenu(fileName = "PackageData", menuName = "KDebug/PackageData")]
    public class PackageData : ScriptableObject
    {
        public PackageData()
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
}
