
namespace KDebugPackage.Console
{
    public interface IConsoleHandler
    {
        void OnAwake(Data.ConsoleData a_data);
        void OnUpdate();

        bool IsOpen { get; }
        void Open();
        void Close();

        void OnWriteToConsole(string a_value);

        void OnVisualChange();
    }
}