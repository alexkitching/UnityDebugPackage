using UnityEngine;
using System.Text;

namespace KDebugPackage.DebugDisplay
{
    public abstract class DebugDisplayBase : IDebugDisplay
    {
        protected DebugDisplayBase _parent = null;

        private IDebugDisplayUIObject _uiObject = null;
        IDebugDisplayUIObject IDebugDisplay.UIObject => _parent != null ? _parent._uiObject : _uiObject;

        public RectTransform Rect => _uiObject?.Rect;

        private float _yOffset = 0;

        private readonly GUIStyle _Style = GUIStyle.none;
        private Color _defaultFontColour = Color.black;

        public Color DefaultFontColour
        {
            get => _parent?.DefaultFontColour ?? _defaultFontColour;

            set
            {
                if (_parent != null)
                {
                    _parent.DefaultFontColour = value;
                }

                _defaultFontColour = value;
            }
        }

        private float _Padding = 10f;

        protected static Vector2 s_DefaultDisplaySize = new Vector2(40, 40);

        private static readonly StringBuilder s_StringBuilder = new StringBuilder(128);
        protected StringBuilder StringBuilder => s_StringBuilder;

        protected DebugDisplayBase()
        {
            _Style.wordWrap = false;
        }

        public void OnAdd(IDebugDisplayUIObject a_object)
        {
            _uiObject = a_object;
            _uiObject.Rect.sizeDelta = s_DefaultDisplaySize;
        }

        public void OnAdd(IDebugDisplay a_display)
        {
            _uiObject = a_display.UIObject;
            _uiObject.Rect.sizeDelta = s_DefaultDisplaySize;
            _parent = (DebugDisplayBase) a_display;
        }

        public void OnRemove()
        {
            _uiObject = null;
            _parent = null;
        }

        public virtual void OnShow()
        {
        }

        public virtual void OnUpdate()
        {
        }

        public abstract void OnGUI();

        public virtual void OnPostGUI()
        {
            _yOffset = 0;
        }

        private readonly GUIContent _content = new GUIContent();

        protected void DrawText(string a_text, bool a_bBold = false, Color? a_color = null)
        {
            _Style.fontStyle = (FontStyle) (a_bBold ? 1 : 0);
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

            if (size.x + (_Padding * 2) > _uiObject.Rect.sizeDelta.x)
            {
                _uiObject.Rect.sizeDelta = new Vector2(size.x + (_Padding * 2), _uiObject.Rect.sizeDelta.y);
            }

            if (baseOffset + _yOffset + size.y + (_Padding * 2) > _uiObject.Rect.sizeDelta.y)
            {
                _uiObject.Rect.sizeDelta = new Vector2(_uiObject.Rect.sizeDelta.x,
                    baseOffset + _yOffset + size.y + (_Padding * 2));
            }

            Vector2 position = _uiObject.Rect.anchoredPosition;

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
            if (GetVerticalOffset() + (_Padding * 2) > _uiObject.Rect.sizeDelta.y)
            {
                _uiObject.Rect.sizeDelta =
                    new Vector2(_uiObject.Rect.sizeDelta.x, GetVerticalOffset() + (_Padding * 2));
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
}