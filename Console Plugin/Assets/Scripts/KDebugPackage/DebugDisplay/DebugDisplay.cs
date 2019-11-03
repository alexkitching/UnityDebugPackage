using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class DebugDisplay
{
    protected RectTransform _rect = null;

    public RectTransform GetRect => _rect;

    private float _yOffset = 0;

    private readonly GUIStyle _Style = GUIStyle.none;
    private float _Padding = 10f;

    protected DebugDisplay()
    {
        _Style.wordWrap = false;
    }

    public void OnAdd(RectTransform a_rect)
    {
        _rect = a_rect;
    }

    public void OnRemove()
    {

    }

    public abstract void OnGUI();

    public void OnPostGUI()
    {
        _yOffset = 0;
    }

    private readonly GUIContent _content = new GUIContent();
    protected void DrawText(string a_text, bool a_bBold = false)
    {
        _Style.fontStyle = (FontStyle)(a_bBold ? 1 : 0);
        _content.text = a_text;
        Vector2 size = _Style.CalcSize(_content);
        
        if (size.x + (_Padding * 2) > _rect.sizeDelta.x)
        {
            _rect.sizeDelta = new Vector2(size.x + (_Padding * 2), _rect.sizeDelta.y);
        }
        
        if (_yOffset + size.y + (_Padding * 2) > _rect.sizeDelta.y)
        {
            _rect.sizeDelta = new Vector2(_rect.sizeDelta.x, _yOffset + size.y + (_Padding * 2));
        }

        Vector2 position = _rect.anchoredPosition;

        // Apply Offset
        position.x += _Padding;
        position.y += _Padding;

        position.y += _yOffset;

        Rect labelRect = new Rect(position, size);
        GUI.Label(labelRect, _content, _Style);
        _yOffset += size.y;
    }

    protected void VerticalPad(float a_amount)
    {
        _yOffset += a_amount;
        if (_yOffset + (_Padding * 2) > _rect.sizeDelta.y)
        {
            _rect.sizeDelta = new Vector2(_rect.sizeDelta.x, _yOffset + (_Padding * 2));
        }
    }

    protected float GetVerticalOffset()
    {
        return _yOffset;
    }

}