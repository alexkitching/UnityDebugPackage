using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace KDebug
{
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

        protected void DrawText(string a_text)
        {
            GUIContent content = new GUIContent(a_text);
            Vector2 size = _Style.CalcSize(content);

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
            GUI.Label(labelRect, content, _Style);
            _yOffset += size.y;
        }
    }
}
