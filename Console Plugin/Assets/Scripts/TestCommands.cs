using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace KConsole
{
    public static class TestCommands 
    {
        private class SpawnCubeCommand : ICommand
        {
            string ICommand.Name { get; set; } = "SpawnCube";

            string ICommand.GetArgName(int a_argIndex)
            {
                switch (a_argIndex)
                {
                    case 0:
                        return "x:float";
                    case 1:
                        return "y:float";
                    case 2:
                        return "z:float";
                }
                return string.Empty;
            }

            CommandResult ICommand.Run(params string[] a_args)
            {
                if (a_args.Length != 3)
                {
                    return CommandResult.Error("Invalid Argument Length!");
                }

                if (float.TryParse(a_args[0], out float x) == false)
                {
                    return CommandResult.Error("Invalid X Argument: expected float!");
                }

                if (float.TryParse(a_args[1], out float y) == false)
                {
                    return CommandResult.Error("Invalid Y Argument: expected float!");
                }

                if (float.TryParse(a_args[1], out float z) == false)
                {
                    return CommandResult.Error("Invalid Z Argument: expected float!");
                }

                Spawn(new Vector3(x, y, z));

                return CommandResult.Default("Success");
            }


            static void Spawn(Vector3 a_pos)
            {
                GameObject cubeObject = GameObject.CreatePrimitive(PrimitiveType.Cube);
                GameObject.Instantiate(cubeObject, a_pos, Quaternion.identity);
            }
        }

        private class SpawnSphereCommand : ICommand
        {
            string ICommand.Name { get; set; } = "SpawnSphere";

            string ICommand.GetArgName(int a_argIndex)
            {
                switch (a_argIndex)
                {
                    case 0:
                        return "x:float";
                    case 1:
                        return "y:float";
                    case 2:
                        return "z:float";
                }
                return string.Empty;
            }

            CommandResult ICommand.Run(params string[] a_args)
            {
                if (a_args.Length != 3)
                {
                    return CommandResult.Error("Invalid Argument Length!");
                }

                if (float.TryParse(a_args[0], out float x) == false)
                {
                    return CommandResult.Error("Invalid X Argument: expected float!");
                }

                if (float.TryParse(a_args[1], out float y) == false)
                {
                    return CommandResult.Error("Invalid Y Argument: expected float!");
                }

                if (float.TryParse(a_args[1], out float z) == false)
                {
                    return CommandResult.Error("Invalid Z Argument: expected float!");
                }

                Spawn(new Vector3(x, y, z));
                return CommandResult.Default("Success");
            }


            static void Spawn(Vector3 a_pos)
            {
                GameObject sphereObject = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                GameObject.Instantiate(sphereObject, a_pos, Quaternion.identity);
            }
        }

        private class AddHealthCommand : ICommand
        {
            string ICommand.Name { get; set; } = "AddHealth";

            string ICommand.GetArgName(int a_argIndex)
            {
                switch (a_argIndex)
                {
                    case 0:
                        return "HealthAmount:float";
                }
                return string.Empty;
            }

            CommandResult ICommand.Run(params string[] a_args)
            {
                return CommandResult.Default("Success");
            }
        }

        private class AddMana : ICommand
        {
            string ICommand.Name { get; set; } = "AddMana";

            string ICommand.GetArgName(int a_argIndex)
            {
                switch (a_argIndex)
                {
                    case 0:
                        return "ManaAmount:float";
                }
                return string.Empty;
            }

            CommandResult ICommand.Run(params string[] a_args)
            {
                return CommandResult.Default("Success");
            }
        }

        private class NoclipCommand : ICommand
        {
            string ICommand.Name { get; set; } = "Noclip";

            string ICommand.GetArgName(int a_argIndex)
            {
                switch (a_argIndex)
                {
                    case 0:
                        return "Value:Bool";
                }
                return string.Empty;
            }

            CommandResult ICommand.Run(params string[] a_args)
            {
                return CommandResult.Default("Success");
            }
        }

        private class SetPositionCommand : ICommand
        {
            string ICommand.Name { get; set; } = "SetPosition";

            string ICommand.GetArgName(int a_argIndex)
            {
                switch (a_argIndex)
                {
                    case 0:
                        return "x:float";
                    case 1:
                        return "y:float";
                    case 2:
                        return "z:float";
                }
                return string.Empty;
            }

            CommandResult ICommand.Run(params string[] a_args)
            {
                if (KConsole.CommandContext == null)
                {
                    return CommandResult.Error("No Valid Context Set");
                }

                if (float.TryParse(a_args[0], out float x) == false)
                {
                    return CommandResult.Error("Invalid Argument for X: Expected float");
                }

                if (float.TryParse(a_args[1], out float y) == false)
                {
                    return CommandResult.Error("Invalid Argument for Y: Expected float");
                }

                if (float.TryParse(a_args[2], out float z) == false)
                {
                    return CommandResult.Error("Invalid Argument for Z: Expected float");
                }

                KConsole.CommandContext.transform.position = new Vector3(x,y,z);

                return CommandResult.Default("GO: " + KConsole.CommandContext.name + " moved to: " + KConsole.CommandContext.transform.position);
            }
        }

        private class SetRotationCommand : ICommand
        {
            string ICommand.Name { get; set; } = "SetRotation";

            string ICommand.GetArgName(int a_argIndex)
        {
            switch (a_argIndex)
            {
                case 0:
                    return "x:float";
                case 1:
                    return "y:float";
                case 2:
                    return "z:float";
                case 3:
                    return "w:float";
            }
            return string.Empty;
        }

            CommandResult ICommand.Run(params string[] a_args)
            {
                return CommandResult.Default("Success");
            }
        }

        private static bool bRegistered = false;
        public static void Register()
        {
            if (bRegistered)
                return;

            KConsole.RegisterCommand(new SpawnCubeCommand());
            KConsole.RegisterCommand(new SpawnSphereCommand());
            KConsole.RegisterCommand(new AddHealthCommand());
            KConsole.RegisterCommand(new AddMana());
            KConsole.RegisterCommand(new NoclipCommand());
            KConsole.RegisterCommand(new SetPositionCommand());
            KConsole.RegisterCommand(new SetRotationCommand());
        }
    }

}

