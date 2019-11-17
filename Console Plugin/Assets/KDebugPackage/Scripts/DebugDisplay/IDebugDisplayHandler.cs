namespace KDebugPackage.DebugDisplay
{
    public interface IDisplayHandler
    {
        void OnAwake();
        void OnUpdate();
        void OnGUI();

        void AddDisplay(IDebugDisplay a_display);
        void RemoveDisplay(IDebugDisplay a_display);
        void OnVisualChange();
    }
}