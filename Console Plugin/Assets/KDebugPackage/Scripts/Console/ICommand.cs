using System.Runtime.CompilerServices;

public interface ICommand
{
    string Name { get; }
    int ArgCount { get; }
    string GetArgName(int a_argIndex);
    CommandResult Run(params string[] a_args);
}

public struct CommandResult
{
    public CommandResult(string a_value)
    {
        Result = a_value;
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static CommandResult Warning(string a_value) { return new CommandResult("<color=yellow>" + a_value); }
    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static CommandResult Error(string a_value) { return new CommandResult("<color=red>" + a_value); }

    public string Result;
}