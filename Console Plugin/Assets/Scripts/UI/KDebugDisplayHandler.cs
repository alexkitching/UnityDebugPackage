using System.Collections;
using System.Collections.Generic;
using KDebug;
using UnityEngine;
using UnityEngine.Experimental.XR;

public class KDebugDisplayHandler : MonoBehaviour, KDebug.DebugDisplayHandler
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
        while (_debugDisplayObjects.Count < MAX_DISPLAYS)
        {
            _debugDisplayObjects.Push(Instantiate(_displayTemplate, _poolRoot.transform));
        }
        KDebugDisplayManager.Initialise(this);
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void OnGUI()
    {
        for (int i = 0; i < _activeDisplays.Count; ++i)
        {
            DebugDisplay display = _activeDisplays[i];
            display.OnGUI();
        }
    }
    
    public void AddDisplay(DebugDisplay a_display)
    {
        RectTransform rect = _debugDisplayObjects.Pop();
        a_display.OnAdd(rect);
        rect.transform.SetParent(_displayRoot.transform);
        rect.gameObject.SetActive(true);

        _activeDisplays.Add(a_display);
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
  
}
