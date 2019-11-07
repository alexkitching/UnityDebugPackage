using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PerformanceDisplay : DebugDisplay
{
    public PerformanceDisplay(Color a_gcIconColor, Color a_longFrameIconColor)
    {
        Texture2D GCIcon = new Texture2D(2,2, TextureFormat.ARGB32, false);
        for (int y = 0; y < GCIcon.height; ++y)
        {
            for (int x = 0; x < GCIcon.width; ++x)
            {
                GCIcon.SetPixel(x, y, a_gcIconColor);
            }
        }
        GCIcon.Apply(false);

        Texture2D LongFrameIcon = new Texture2D(2,2, TextureFormat.ARGB32, false);
        for (int y = 0; y < GCIcon.height; ++y)
        {
            for (int x = 0; x < GCIcon.width; ++x)
            {
                LongFrameIcon.SetPixel(x, y, a_longFrameIconColor);
            }
        }
        LongFrameIcon.Apply(false);

        _GCIcon = GCIcon;
        _LongFrameIcon = LongFrameIcon;
    }

    private readonly Texture2D _GCIcon;
    private readonly Texture2D _LongFrameIcon;
    private const int cShowForFrames = 10;
    private int _GCFrameCounter = 0;
    private int _LongFrameCounter = 0;

    private string FPSStringValue;
    private string CPUStringValue;
    private string CurrentMemoryValue;
    private string CurrentHeapValue;

    private float stringValueUpdateInterval = 0.5f;
    private float stringValueUpdateTime = 0f;

    public override void OnGUI()
    {
        if (KDebug.Tracker == null)
            return;

        // Draw Title
        DrawText("Performance Display", true);

        DrawPerformanceValues();

        // Draw FPS
        if (KDebug.Tracker.WasGCCollected &&
            _GCFrameCounter != cShowForFrames)
        {
            _GCFrameCounter = cShowForFrames;
        }

        if (KDebug.Tracker.WasLongFrame &&
            _LongFrameCounter != cShowForFrames)
        {
            _LongFrameCounter = cShowForFrames;
        }

        DrawIcons();
    }

    private void DrawIcons()
    {
        if (_GCFrameCounter-- > 0)
        {
            DrawGCIcon();
        }

        if (_LongFrameCounter-- > 0)
        {
            DrawLongFrameIcon();
        }
        VerticalPad(IconSize);
    }

    private int IconSize = 30;
    private void DrawGCIcon()
    {
        GUI.DrawTexture(new Rect(10, GetVerticalOffset() + 0.5f * IconSize, IconSize, IconSize), _GCIcon);
    }

    private void DrawLongFrameIcon()
    {
        GUI.DrawTexture(new Rect(IconSize + 15, GetVerticalOffset() + 0.5f * IconSize, IconSize, IconSize), _LongFrameIcon);
    }

    private void DrawPerformanceValues()
    {
        // Update Data
        stringValueUpdateTime -= Time.deltaTime;
        if (stringValueUpdateTime <= 0f)
        {
            FPSStringValue = $"FPS: {KDebug.Tracker.GetFPS:0.00}";
            CPUStringValue = $"CPU: {KDebug.Tracker.GetCPUms:0.00}ms";
            CurrentMemoryValue = $"Current Memory: {KDebug.Tracker.GetCurrentMemory / 1000000} Mb";
            CurrentHeapValue = $"Current Heap Size: {KDebug.Tracker.GetHeapSize / 1000000} Mb";
            stringValueUpdateTime = stringValueUpdateInterval;
        }

        // Draw Text each frame
        DrawText(FPSStringValue);
        DrawText(CPUStringValue);
        DrawText(CurrentMemoryValue);
        DrawText(CurrentHeapValue);
    }
}