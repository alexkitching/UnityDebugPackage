
public partial class KDebug
{
    private interface ILog
    {
        bool Initialise(string a_path);
        void WriteLine(string a_value);
        bool Shutdown();
    }
}