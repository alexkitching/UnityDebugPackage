using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using KDebugPackage;
using KDebugPackage.DebugDisplay;

public class PerformanceDisplay : DebugDisplayBase
{
    public PerformanceDisplay(Color a_gcIconColor, Color a_longFrameIconColor)
    {
        int textureDim = 2;
        Texture2D Backer = new Texture2D(textureDim, textureDim, TextureFormat.ARGB32, false);
        Texture2D GCIcon = new Texture2D(textureDim, textureDim, TextureFormat.ARGB32, false);
        Texture2D LongFrameIcon = new Texture2D(textureDim, textureDim, TextureFormat.ARGB32, false);

        for (int y = 0; y < textureDim; ++y)
        {
            for (int x = 0; x < textureDim; ++x)
            {
                Backer.SetPixel(x, y, Color.black);
                GCIcon.SetPixel(x, y, a_gcIconColor);
                LongFrameIcon.SetPixel(x, y, a_longFrameIconColor);
            }
        }
        Backer.Apply(false);
        GCIcon.Apply(false);
        LongFrameIcon.Apply(false);

        _iconBacker = Backer;
        _gcIcon = GCIcon;
        _longFrameIcon = LongFrameIcon;
    }

    private readonly Texture2D _iconBacker;
    private readonly Texture2D _gcIcon;
    private readonly Texture2D _longFrameIcon;
    private const int CShowForFrames = 10;
    private int _gcFrameCounter = 0;
    private int _longFrameCounter = 0;

    private string _fpsStringValue;
    private string _cpuStringValue;
    private string _currentMemoryValue;
    private string _currentHeapValue;

    private float stringValueUpdateInterval = 0.5f;
    private float stringValueUpdateTime = 0f;

    public override void OnUpdate()
    {
        if (KDebug.Tracker == null)
            return;

        UpdatePerformanceValues();

        if (KDebug.Tracker.WasGCCollected &&
            _gcFrameCounter != CShowForFrames)
        {
            _gcFrameCounter = CShowForFrames;
        }

        if (KDebug.Tracker.WasLongFrame &&
            _longFrameCounter != CShowForFrames)
        {
            _longFrameCounter = CShowForFrames;
        }

        _gcFrameCounter--;
        _longFrameCounter--;
    }

    public override void OnGUI()
    {
        // Draw Title
        DrawText("Performance Display", true);

        if (KDebug.Tracker == null)
        {
            DrawText("MISSING KDebug.Tracker", true, Color.red);
            return;
        }

        DrawPerformanceValues();
        DrawIcons();
    }

    private void DrawIcons()
    {
        DrawIconBacking();

        if (_gcFrameCounter > 0)
        {
            DrawGCIcon();
        }

        if (_longFrameCounter > 0)
        {
            DrawLongFrameIcon();
        }

        VerticalPad(IconSize);
    }

    private int IconSize = 30;
    private void DrawGCIcon()
    {
        float x = 10f;
        float y = GetVerticalOffset() + 0.5f * IconSize;
        GUI.DrawTexture(new Rect(x, y, IconSize, IconSize),
                        _gcIcon);
    }

    private void DrawLongFrameIcon()
    {
        float x = IconSize + 10f;
        float y = GetVerticalOffset() + 0.5f * IconSize;
        GUI.DrawTexture(new Rect(x, y, IconSize, IconSize), 
                        _longFrameIcon);
    }

    private void DrawIconBacking()
    {
        float x = 9f;
        float y = (GetVerticalOffset() + 0.5f * IconSize) - 1f;
        float w = IconSize * 2 + 2f;
        float h = IconSize + 2f;
        GUI.DrawTexture(new Rect(x, y, w, h), 
                        _iconBacker);
    }

    private void UpdatePerformanceValues()
    {
        // Update Data
        stringValueUpdateTime -= Time.deltaTime;
        if (stringValueUpdateTime <= 0f)
        {
            _fpsStringValue = $"FPS: {KDebug.Tracker.GetFPS:0.00}";
            _cpuStringValue = $"CPU: {KDebug.Tracker.GetCPUms:0.00}ms";
            _currentMemoryValue = $"Current Memory: {KDebug.Tracker.GetCurrentMemory / 1000000} Mb";
            _currentHeapValue = $"Current Heap Size: {KDebug.Tracker.GetHeapSize / 1000000} Mb";
            stringValueUpdateTime = stringValueUpdateInterval;
        }
    }

    private void DrawPerformanceValues()
    {
        // Draw Text each frame
        DrawText(_fpsStringValue);
        DrawText(_cpuStringValue);
        DrawText(_currentMemoryValue);
        DrawText(_currentHeapValue);
    }
}