using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using KDebugPackage.DebugDisplay;

[RequireComponent(typeof(RectTransform))]
public class DebugDisplayObject : MonoBehaviour, IDebugDisplayUIObject
{
    [Header("Will attempt GetComponent if not specified")]
    [SerializeField]
    private UnityEngine.UI.Image _image = null;

    private RectTransform _rect = null;
    public RectTransform Rect => _rect;

    private Color _colour = Color.white;
    public Color Colour
    {
        get => _colour;
        set
        {
            if (_image != null)
            {
                _image.color = value;
            }
            _colour = value;
        }
    }

    private void Awake()
    {
        _rect = GetComponent<RectTransform>();
        if (_rect == null)
        {
            Debug.LogError("DebugDisplayObject:: Failed to Find RectTransform on gameobject");
        }

        if (_image == null)
        {
            _image = GetComponent<UnityEngine.UI.Image>();
            _colour = _image.color;
        }
    }

    public void SetShouldCull(bool a_value)
    {
        if (_image != null)
        {
            _image.canvasRenderer.cull = a_value;
        }
    }
}
