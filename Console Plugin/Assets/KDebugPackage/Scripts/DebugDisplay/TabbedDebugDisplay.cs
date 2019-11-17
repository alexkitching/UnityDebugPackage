using System.Collections.Generic;

namespace KDebugPackage.DebugDisplay
{
    public class DebugTabbedDisplay : DebugDisplayBase
    {
        private readonly List<DebugDisplayBase> _tabs = new List<DebugDisplayBase>();

        private string _tabText;
        private int _currentTab = 0;

        public override void OnShow()
        {
            int tabCount = _tabs.Count;
            if (tabCount > 0 && _currentTab < tabCount)
            {
                _tabs[_currentTab]?.OnShow();
            }

            UpdateTabText();
        }

        public override void OnUpdate()
        {
            DebugDisplayBase tab = _tabs[_currentTab];
            tab?.OnUpdate();
        }

        public override void OnGUI()
        {
            StringBuilder.Clear();

            DebugDisplayBase tab = _tabs[_currentTab];

            // On Gui
            DrawText(_tabText, true);
            tab?.OnGUI();
        }

        public override void OnPostGUI()
        {
            base.OnPostGUI();

            DebugDisplayBase tab = _tabs[_currentTab];
            tab?.OnPostGUI();
        }

        public void NextTab()
        {
            int newIdx = _currentTab + 1;

            if (newIdx >= _tabs.Count)
            {
                newIdx = 0;
            }

            ChangeTab(newIdx);
        }

        public void PreviousTab()
        {
            int newIdx = _currentTab - 1;

            if (newIdx < 0)
            {
                newIdx = _tabs.Count - 1;
            }

            ChangeTab(newIdx);
        }

        private void ChangeTab(int a_tabIndex)
        {
            DebugDisplayBase oldTab = _tabs[_currentTab];

            _currentTab = a_tabIndex;

            DebugDisplayBase newTab = _tabs[_currentTab];

            if (newTab == oldTab)
            {
                return;
            }

            newTab.OnShow();
            newTab.Rect.sizeDelta = s_DefaultDisplaySize;
            UpdateTabText();
        }

        public void AddTab(DebugDisplayBase a_display)
        {
            a_display.OnAdd(this);

            if (_tabs.Count == 0)
            {
                a_display.OnShow();
            }

            _tabs.Add(a_display);

            UpdateTabText();
        }

        private void UpdateTabText()
        {
            _tabText = $"Tab {_currentTab + 1}/{_tabs.Count}";
        }
    }
}