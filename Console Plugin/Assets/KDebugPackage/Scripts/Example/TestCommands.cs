using System.Collections;
using System.Collections.Generic;
using System.Runtime.Remoting.Messaging;
using UnityEngine;

public partial class KDebug
{
    private static class TestCommands 
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
                if (a_args.Length >= 1)
                {
                    float value = float.Parse(a_args[0]);
                    ExampleStats.s_Health += value;
                }

                return CommandResult.Default("Success");
            }
        }

        private class Kill : ICommand
        {
            string ICommand.Name { get; set; } = "Kill";
    
            string ICommand.GetArgName(int a_argIndex)
            {
                return string.Empty;
            }
    
            CommandResult ICommand.Run(params string[] a_args)
            {
                ExampleStats.s_Health = 0;
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
                if (a_args.Length >= 1)
                {
                    float value = float.Parse(a_args[0]);
                    ExampleStats.s_Mana += value;
                }
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

            private GameObject noclipObj = null;
            CommandResult ICommand.Run(params string[] a_args)
            {
                if (a_args.Length == 1 &&
                    bool.TryParse(a_args[0], out bool value))
                {
                    if (value)
                    {
                        Transform playerTransform = ExampleStats.s_Transform;

                        if (playerTransform != null)
                        {
                            noclipObj = GameObject.Instantiate(playerTransform.gameObject);
                            noclipObj.AddComponent<NoclipCamera>();
                        }
                    }
                    else
                    {
                        if (noclipObj != null)
                        {
                            GameObject.Destroy(noclipObj);
                        }
                    }
                }

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
                if (KDebug.Console.CommandContext == null)
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
    
                KDebug.Console.CommandContext.transform.position = new Vector3(x,y,z);
    
                return CommandResult.Default("GO: " + KDebug.Console.CommandContext.name + " moved to: " + KDebug.Console.CommandContext.transform.position);
            }
        }

        private class TranslateCommand : ICommand
        {
            string ICommand.Name { get; set; } = "Translate";
    
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
                        return "worldSpace?:bool";
                }
                return string.Empty;
            }
    
            CommandResult ICommand.Run(params string[] a_args)
            {
                if (KDebug.Console.CommandContext == null)
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

                if (bool.TryParse(a_args[3], out bool worldSpace) == false)
                {
                    return CommandResult.Error("Invalid Argument for wor: Expected float");
                }

                Space space = Space.Self;

                if (worldSpace)
                {
                    space = Space.World;
                }

                KDebug.Console.CommandContext.transform.Translate(new Vector3(x,y,z), space);
    
                return CommandResult.Default("GO: " + KDebug.Console.CommandContext.name + " translated to: " + KDebug.Console.CommandContext.transform.position);
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
    
        private class CauseGC : ICommand
        {
            string ICommand.Name { get; set; } = "CauseGC";
    
            string ICommand.GetArgName(int a_argIndex)
            {
                return string.Empty;
            }
    
            private class MBGarbage
            {
                byte[] garbage = new byte[1024 * 1024];
            }
    
    
            CommandResult ICommand.Run(params string[] a_args)
            {
                List<MBGarbage> list = new List<MBGarbage>();
                for (int i = 0; i < 800; ++i)
                {
                    MBGarbage garbage = new MBGarbage();
                    list.Add(garbage);
                }

                return CommandResult.Default("Success");
            }
        }

        private static bool bRegistered = false;
        public static void Register()
        {
            if (bRegistered)
                return;
    
            KDebug.Console.RegisterCommand(new SpawnCubeCommand());
            KDebug.Console.RegisterCommand(new SpawnSphereCommand());
            KDebug.Console.RegisterCommand(new AddHealthCommand());
            KDebug.Console.RegisterCommand(new AddMana());
            KDebug.Console.RegisterCommand(new Kill());
            KDebug.Console.RegisterCommand(new NoclipCommand());
            KDebug.Console.RegisterCommand(new SetPositionCommand());
            KDebug.Console.RegisterCommand(new TranslateCommand());
            KDebug.Console.RegisterCommand(new SetRotationCommand());
            KDebug.Console.RegisterCommand(new CauseGC());
        }
    }
}
