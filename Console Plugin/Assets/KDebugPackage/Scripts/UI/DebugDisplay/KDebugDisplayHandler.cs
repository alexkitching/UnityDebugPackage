using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using KDebugPackage;
using KDebugPackage.DebugDisplay;

/// <summary>
/// Implementation of the Display Handler Interface
/// Registered through the KDebugManager Initialisation Function.
/// </summary>
public class KDebugDisplayHandler : MonoBehaviour, IDisplayHandler
{
    [SerializeField] 
    private DebugDisplayObject _displayTemplate = null;
    [SerializeField]
    private GameObject _poolRoot = null;
    [SerializeField]
    private GameObject _displayRoot = null;

    private Stack<DebugDisplayObject> _debugDisplayObjects = null;
    private List<IDebugDisplay> _activeDisplays = null;
    private int _maxDisplays = 1;

    void IDisplayHandler.OnAwake()
    {
        // Preallocate Containers
        _maxDisplays = KDebug.DisplayManager.MaxDisplays;
        _debugDisplayObjects = new Stack<DebugDisplayObject>(_maxDisplays);

        _activeDisplays = new List<IDebugDisplay>(_maxDisplays);
        
        // Warmup Display Object Pool
        WarmupPool();
    }

    void IDisplayHandler.OnUpdate()
    {
        for (int i = 0; i < _activeDisplays.Count; ++i)
        {
            IDebugDisplay display = _activeDisplays[i];
            display?.OnUpdate();
        }
    }

    void IDisplayHandler.OnGUI()
    {
        for (int i = 0; i < _activeDisplays.Count; ++i)
        {
            IDebugDisplay display = _activeDisplays[i];
            display?.OnGUI();
            display?.OnPostGUI();
        }
    }

    public void AddDisplay(IDebugDisplay a_display)
    {
        if (a_display == null)
        {
            Debug.LogError("KDebugDisplayHandler:: Attempting to add null display!");
            return;
        }

        if (_debugDisplayObjects.Count + _activeDisplays.Count == 0) // In the event of no prewarmup, force.
        {
            WarmupPool();
        }

        // Pop Object from Pool
        DebugDisplayObject displayObject = _debugDisplayObjects.Pop();

        // Call On Add
        a_display.OnAdd(displayObject);
        // Set Parent to Root
        displayObject.transform.SetParent(_displayRoot.transform);

        // Turn Culling off - Display now!
        displayObject.SetShouldCull(false);

        // Apply Visuals to Display
        ApplyVisualsToDisplay(a_display);

        // Add to Active Displays List
        _activeDisplays.Add(a_display);

        // Call on Show
        a_display.OnShow();
    }

    public void RemoveDisplay(IDebugDisplay a_display)
    {
        // Cast to Concrete UI Object
        DebugDisplayObject UIObject = (DebugDisplayObject)a_display.UIObject;

        // Set to Cull
        UIObject.SetShouldCull(true);

        // Parent back under the pool
        UIObject.Rect.SetParent(_poolRoot.transform);

        // Remove from the active displays list.
        _activeDisplays.Remove(a_display);

        // Call on Remove
        a_display.OnRemove();

        // Push UI Object back into the Pool.
        _debugDisplayObjects.Push((DebugDisplayObject)a_display.UIObject);
    }

    private void WarmupPool()
    {
        // Fill Pool to Max
        while (_debugDisplayObjects.Count < _maxDisplays)
        {
            DebugDisplayObject displayObject = Instantiate(_displayTemplate, _poolRoot.transform);

            // Cull by Default
            displayObject.SetShouldCull(true);
            // Enable Object, Template should be disabled.
            displayObject.gameObject.SetActive(true);
            // Push to Pool.
            _debugDisplayObjects.Push(displayObject);
        }
    }

    public void OnVisualChange()
    {
        for (int i = 0; i < _activeDisplays.Count; ++i)
        {
            IDebugDisplay disp = _activeDisplays[i];
            ApplyVisualsToDisplay(disp);
        }
    }

    private void ApplyVisualsToDisplay(IDebugDisplay a_display)
    {
        if (a_display == null) 
            return;

        // Set Image/Font Colour
        a_display.UIObject.Colour = KDebug.GetVisualData.PrimaryColor;
        a_display.DefaultFontColour = KDebug.GetVisualData.PrimaryTextColor;
    }

}
