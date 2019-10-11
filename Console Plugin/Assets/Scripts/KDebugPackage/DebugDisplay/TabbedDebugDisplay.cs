using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace KDebug
{
    public class DebugTabbedDisplay : DebugDisplay
    {
        private readonly List<DebugDisplay> _tabs = new List<DebugDisplay>();

        private int _currentTab = 0;
        public override void OnGUI()
        {
            DebugDisplay tab = _tabs[_currentTab];
            tab?.OnGUI();
            tab?.OnPostGUI();
        }

        public void NextTab()
        {
            _currentTab++;
            if (_currentTab >= _tabs.Count)
            {
                _currentTab = 0;
            }
        }

        public void PreviousTab()
        {
            _currentTab--;

            if (_currentTab < 0)
            {
                _currentTab = _tabs.Count;
            }
        }

        public void AddTab(DebugDisplay a_display)
        {
            a_display.OnAdd(_rect);
            _tabs.Add(a_display);
        }
    }

}

