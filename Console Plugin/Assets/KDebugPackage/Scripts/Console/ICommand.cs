using System.Runtime.CompilerServices;

namespace KDebugPackage.Console
{
    // Command Interface
    public interface ICommand
    {
        string Name { get; }
        int ArgCount { get; }
        string GetArgName(int a_argIndex);
        CommandResult Run(params string[] a_args);
    }

    public struct CommandResult
    {
        public string Result { get; }

        public CommandResult(string a_value)
        {
            Result = a_value;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static CommandResult Warning(string a_value)
        {
            return new CommandResult("<color=yellow>" + a_value);
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static CommandResult Error(string a_value)
        {
            return new CommandResult("<color=red>" + a_value);
        }
    }
}