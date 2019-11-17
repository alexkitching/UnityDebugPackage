public interface IConsoleHandler
{
    void OnAwake(KDebug.ConsoleData a_data);
    void OnUpdate();

    bool IsOpen { get;}
    void Open();
    void Close();

    void OnWriteToConsole(string a_value);

    void OnVisualChange();
}