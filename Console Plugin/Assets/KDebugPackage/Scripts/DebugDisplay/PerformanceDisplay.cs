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

        _IconBacker = Backer;
        _GCIcon = GCIcon;
        _LongFrameIcon = LongFrameIcon;
    }

    private readonly Texture2D _IconBacker;
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

    public override void OnUpdate()
    {
        if (KDebug.Tracker == null)
            return;

        UpdatePerformanceValues();

        if (KDebug.Tracker.WasGCCollected &&
            _GCFrameCounter != cShowForFrames)
        {
            _GCFrameCounter = cShowForFrames;
            KDebug.Log("<color=yellow>GCOccured!");
        }

        if (KDebug.Tracker.WasLongFrame &&
            _LongFrameCounter != cShowForFrames)
        {
            _LongFrameCounter = cShowForFrames;
        }

        _GCFrameCounter--;
        _LongFrameCounter--;
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

        if (_GCFrameCounter > 0)
        {
            DrawGCIcon();
        }

        if (_LongFrameCounter > 0)
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
                        _GCIcon);
    }

    private void DrawLongFrameIcon()
    {
        float x = IconSize + 10f;
        float y = GetVerticalOffset() + 0.5f * IconSize;
        GUI.DrawTexture(new Rect(x, y, IconSize, IconSize), 
                        _LongFrameIcon);
    }

    private void DrawIconBacking()
    {
        float x = 9f;
        float y = (GetVerticalOffset() + 0.5f * IconSize) - 1f;
        float w = IconSize * 2 + 2f;
        float h = IconSize + 2f;
        GUI.DrawTexture(new Rect(x, y, w, h), 
                        _IconBacker);
    }

    private void UpdatePerformanceValues()
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
    }

    private void DrawPerformanceValues()
    {
        // Draw Text each frame
        DrawText(FPSStringValue);
        DrawText(CPUStringValue);
        DrawText(CurrentMemoryValue);
        DrawText(CurrentHeapValue);
    }
}