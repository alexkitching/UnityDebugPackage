using UnityEngine;

namespace KDebugPackage.DebugDisplay
{
    public interface IDebugDisplayUIObject
    {
        RectTransform Rect { get; }
        Color Colour { get; set; }
    }
}