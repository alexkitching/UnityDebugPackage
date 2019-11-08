using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KDebugDisplayHandler : MonoBehaviour, KDebug.DisplayHandler
{
    [SerializeField] 
    private RectTransform _displayTemplate = null;
    [SerializeField]
    private GameObject _poolRoot = null;
    [SerializeField]
    private GameObject _displayRoot = null;

    private const int MAX_DISPLAYS = 10;
    private Stack<RectTransform> _debugDisplayObjects = new Stack<RectTransform>(MAX_DISPLAYS);
    private List<DebugDisplay> _activeDisplays = new List<DebugDisplay>(MAX_DISPLAYS);

    void Awake()
    {
        WarmupPool();
    }

    // Update is called once per frame
    void OnGUI()
    {
        for (int i = 0; i < _activeDisplays.Count; ++i)
        {
            DebugDisplay display = _activeDisplays[i];
            display.OnGUI();
            display.OnPostGUI();
        }
    }
    
    public void AddDisplay(DebugDisplay a_display)
    {
        if (_debugDisplayObjects.Count + _activeDisplays.Count == 0)
        {
            WarmupPool();
        }

        RectTransform rect = _debugDisplayObjects.Pop();

        a_display.OnAdd(rect);
        rect.transform.SetParent(_displayRoot.transform);
        rect.gameObject.SetActive(true);
        _activeDisplays.Add(a_display);

        ApplyVisualsToDisplay(a_display);
        a_display.OnShow();
    }

    public void RemoveDisplay(DebugDisplay a_display)
    {
        RectTransform rect = a_display.GetRect;

        rect.gameObject.SetActive(false);
        rect.transform.SetParent(_poolRoot.transform);

        _activeDisplays.Remove(a_display);

        a_display.OnRemove();
        _debugDisplayObjects.Push(rect);
    }

    private void WarmupPool()
    {
        while (_debugDisplayObjects.Count < MAX_DISPLAYS)
        {
            RectTransform trans = Instantiate(_displayTemplate, _poolRoot.transform);
            _debugDisplayObjects.Push(trans);
        }
    }

    public void OnVisualChange()
    {
        for (int i = 0; i < _activeDisplays.Count; ++i)
        {
            DebugDisplay disp = _activeDisplays[i];
            ApplyVisualsToDisplay(disp);
        }
    }

    private void ApplyVisualsToDisplay(DebugDisplay a_display)
    {
        if (a_display == null) 
            return;

        UnityEngine.UI.Image img = a_display.GetRect.GetComponent<UnityEngine.UI.Image>();
        if (img)
        {
            img.color = KDebug.GetVisualData.PrimaryColor;
        }

        a_display.SetDefaultFontColour(KDebug.GetVisualData.PrimaryTextColor);
    }

}
