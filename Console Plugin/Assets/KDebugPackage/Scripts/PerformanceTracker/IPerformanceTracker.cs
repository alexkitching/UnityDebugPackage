public static partial class KDebug
{
    /// <summary>
    /// Interface for PerformanceTracker
    /// Registered from the KDebugManager and later accessed through the static KDebug namespace.
    /// </summary>
    public interface IPerformanceTracker
    {
        // Properties
        float GetFPS { get; }
        float GetCPUms { get; }
        bool WasLongFrame { get; }
        bool WasGCCollected { get; }
        long GetCurrentMemory { get; }
        long GetHeapSize { get; }

        // Methods
        void OnAwake();
        void OnUpdate();
    }
}   