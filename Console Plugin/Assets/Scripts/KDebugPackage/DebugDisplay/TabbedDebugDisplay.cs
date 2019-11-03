﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DebugTabbedDisplay : DebugDisplay
{
    private readonly List<DebugDisplay> _tabs = new List<DebugDisplay>();

    private string _tabText;
    private int _currentTab = 0;

    public override void OnShow()
    {
        int tabCount = _tabs.Count;
        if (tabCount > 0 && _currentTab < tabCount)
        {
            _tabs[_currentTab]?.OnShow();
        }
    }

    public override void OnGUI()
    {
        StringBuilder.Clear();

        DebugDisplay tab = _tabs[_currentTab];

        // On Gui
        DrawTabText();
        tab?.OnGUI();

        // Post
        OnPostGUI();
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
        DebugDisplay oldTab = _tabs[_currentTab];

        _currentTab = a_tabIndex;

        DebugDisplay newTab = _tabs[_currentTab];

        if (newTab == oldTab)
        {
            return;
        }

        newTab.OnShow();
        newTab.GetRect.sizeDelta = s_DefaultDisplaySize;
    }

    public void AddTab(DebugDisplay a_display)
    {
        a_display.OnAdd(_rect, this);

        if (_tabs.Count == 0)
        {
            a_display.OnShow();
        }

        _tabs.Add(a_display);
    }

    private void DrawTabText()
    {
        _tabText = $"Tab {_currentTab + 1}/{_tabs.Count}";
        DrawText(_tabText, true);
    }

}