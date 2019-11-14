using UnityEngine;
public interface IDebugDisplayUIObject
{
    RectTransform Rect { get; }
    Color Colour { get; set; }
}