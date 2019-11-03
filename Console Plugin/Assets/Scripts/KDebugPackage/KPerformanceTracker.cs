using UnityEngine;

public static partial class KDebug
{
    private static IPerformanceTracker s_Tracker = null;

    public static void SetPerformanceTracker(IPerformanceTracker a_tracker)
    {
        s_Tracker = a_tracker;
    }

    public static IPerformanceTracker Tracker
    {
        get => s_Tracker;
    }

    public interface IPerformanceTracker
    {
        float GetFPS { get; }
        float GetCPUms { get; }
        bool WasLongFrame { get; }
        bool WasGCCollected { get; }
        long GetCurrentMemory { get; }
        long GetHeapSize { get; }
    }
}   

public class KPerformanceTracker : MonoBehaviour, KDebug.IPerformanceTracker
{
    public float GetFPS => m_FPS;

    public float GetCPUms => m_DeltaTime * 1000;

    public bool WasLongFrame => m_bWasLongFrame;

    public bool WasGCCollected => m_bGCPerformed;
    public long GetCurrentMemory => m_LastMemory;
    public long GetHeapSize => m_HeapSize;

    [SerializeField]
    private float m_DeltaTime = 0f;

    private int m_FrameCount = 0;
    private float m_dt = 0f;
    [SerializeField]
    private float m_FPS = 0f;
    private float m_FPSUpdateRate = 4.0f;

    private const float kLongFrameTime = 0.1f;
    [SerializeField]
    private bool m_bWasLongFrame = false;

    [SerializeField]
    private long m_LastMemory = 0;
    [SerializeField]
    private bool m_bGCPerformed = false;

    private long m_HeapSize = 0;

    void Awake()
    {
        KDebug.SetPerformanceTracker(this);
    }

    // Update is called once per frame
    void Update()
    {
        m_DeltaTime = Time.unscaledDeltaTime;
        m_dt += m_DeltaTime;

        m_FrameCount++;
        
        // Update FPS
        if (m_dt > 1.0/m_FPSUpdateRate)
        {
            m_FPS = m_FrameCount / m_dt;
            m_FrameCount = 0;
            m_dt -= 1.0f / m_FPSUpdateRate;
        }

        // Monitor GC
        long memory = System.GC.GetTotalMemory(false);
        m_bGCPerformed = memory < m_LastMemory ? true : false;
        m_LastMemory = memory;

        // Long Frame?
        m_bWasLongFrame = m_DeltaTime > kLongFrameTime ? true : false;

        m_HeapSize = UnityEngine.Profiling.Profiler.GetMonoHeapSizeLong();
    }

    void OnDestroy()
    {

    }

}