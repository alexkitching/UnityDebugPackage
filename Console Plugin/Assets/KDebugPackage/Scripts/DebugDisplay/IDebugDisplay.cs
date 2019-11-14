using UnityEngine;

public interface IDebugDisplay
{
    IDebugDisplayUIObject UIObject { get; }
    Color DefaultFontColour { get; set; }

    void OnAdd(IDebugDisplayUIObject a_uiObject);
    void OnAdd(IDebugDisplay a_parent = null);
    void OnRemove();
    void OnShow();
    void OnUpdate();
    void OnGUI();
    void OnPostGUI();
}
