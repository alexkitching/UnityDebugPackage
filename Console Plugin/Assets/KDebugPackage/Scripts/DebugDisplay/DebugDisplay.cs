using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;

public abstract class DebugDisplay
{
    protected RectTransform _rect = null;
    protected DebugDisplay _parent = null;

    public RectTransform GetRect => _rect;

    private float _yOffset = 0;

    private readonly GUIStyle _Style = GUIStyle.none;
    private Color _defaultFontColour = Color.black;

    private Color DefaultFontColour => _parent?.DefaultFontColour ?? _defaultFontColour;

    private float _Padding = 10f;

    protected static Vector2 s_DefaultDisplaySize = new Vector2(40, 40);

    private static readonly StringBuilder s_StringBuilder = new StringBuilder(128);
    protected StringBuilder StringBuilder => s_StringBuilder;

    protected DebugDisplay()
    {
        _Style.wordWrap = false;
    }

    public void OnAdd(RectTransform a_rect, DebugDisplay a_parent = null)
    {
        _rect = a_rect;
        _rect.sizeDelta = s_DefaultDisplaySize;
        _parent = a_parent;
    }

    public void OnRemove()
    {

    }

    public virtual void OnShow() {}
    public virtual void OnUpdate() { }
    public abstract void OnGUI();

    public void OnPostGUI()
    {
        _yOffset = 0;
    }

    private readonly GUIContent _content = new GUIContent();
    protected void DrawText(string a_text, bool a_bBold = false, Color? a_color = null)
    {
        _Style.fontStyle = (FontStyle)(a_bBold ? 1 : 0);
        if (a_color.HasValue)
        {
            _Style.normal.textColor = a_color.Value;
        }
        else
        {
            _Style.normal.textColor = DefaultFontColour;
        }


        _content.text = a_text;
        Vector2 size = _Style.CalcSize(_content);

        float baseOffset = 0f;
        if (_parent != null)
        {
            baseOffset = _parent.GetVerticalOffset();
        }
        
        if (size.x + (_Padding * 2) > _rect.sizeDelta.x)
        {
            _rect.sizeDelta = new Vector2(size.x + (_Padding * 2), _rect.sizeDelta.y);
        }
        
        if (baseOffset + _yOffset + size.y + (_Padding * 2) > _rect.sizeDelta.y)
        {
            _rect.sizeDelta = new Vector2(_rect.sizeDelta.x, baseOffset + _yOffset + size.y + (_Padding * 2));
        }

        Vector2 position = _rect.anchoredPosition;

        // Apply Offset
        position.x += _Padding;
        position.y += _Padding;

        position.y += baseOffset + _yOffset;


        Rect labelRect = new Rect(position, size);
        GUI.Label(labelRect, _content, _Style);
        _yOffset += size.y;
    }

    protected void VerticalPad(float a_amount)
    {
        _yOffset += a_amount;
        if (GetVerticalOffset() + (_Padding * 2) > _rect.sizeDelta.y)
        {
            _rect.sizeDelta = new Vector2(_rect.sizeDelta.x, GetVerticalOffset() + (_Padding * 2));
        }
    }

    protected float GetVerticalOffset()
    {
        float baseOffset = 0f;
        if (_parent != null)
        {
            baseOffset = _parent.GetVerticalOffset();
        }
        return baseOffset + _yOffset;
    }

    public void SetDefaultFontColour(Color a_colour)
    {
        _defaultFontColour = a_colour;
    }

}