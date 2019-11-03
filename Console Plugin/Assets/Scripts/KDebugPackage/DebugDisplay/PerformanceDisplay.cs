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

    private Texture2D _GCIcon;
    private Texture2D _LongFrameIcon;
    private const int cShowForFrames = 10;
    private int _GCFrameCounter = 0;
    private int _LongFrameCounter = 0;

    public override void OnGUI()
    {
        // Draw Title
        DrawText("Performance Display", true);

        // Draw FPS
        DrawText("FPS: " + $"{KDebug.Tracker.GetFPS:0.#}");
        DrawText("CPU: " + $"{KDebug.Tracker.GetCPUms:0.##}" + "ms");
        DrawText("Current Memory: " + KDebug.Tracker.GetCurrentMemory / 1000000 + " Mb");
        DrawText("Current Heap Size: " + KDebug.Tracker.GetHeapSize / 1000000 + " Mb");

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
}