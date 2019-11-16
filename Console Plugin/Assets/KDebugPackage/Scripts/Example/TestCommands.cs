﻿using System.Collections.Generic;
using UnityEngine;

public partial class KDebug
{
    private static class TestCommands 
    {
        private class SpawnCubeCommand : ICommand
        {
            string ICommand.Name => "SpawnCube";
    
            public int ArgCount => 3;

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
                if (a_args.Length != ArgCount)
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
    
                return new CommandResult("Success");
            }
    
    
            static void Spawn(Vector3 a_pos)
            {
                GameObject cubeObject = GameObject.CreatePrimitive(PrimitiveType.Cube);
                cubeObject.transform.position = a_pos;
            }
        }
    
        private class SpawnSphereCommand : ICommand
        {
            string ICommand.Name => "SpawnSphere";

            public int ArgCount => 3;

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
                if (a_args.Length != ArgCount)
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
                return new CommandResult("Success");
            }
    
    
            static void Spawn(Vector3 a_pos)
            {
                GameObject sphereObject = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                sphereObject.transform.position = a_pos;
            }
        }

        private class AddHealthCommand : ICommand
        {
            string ICommand.Name => "AddHealth";
            public int ArgCount => 1;
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
                if (a_args.Length >= ArgCount)
                {
                    float value = float.Parse(a_args[0]);
                    ExampleStats.s_Health += value;
                }

                return new CommandResult("Success");
            }
        }

        private class Kill : ICommand
        {
            string ICommand.Name => "Kill";
            public int ArgCount => 0;
            string ICommand.GetArgName(int a_argIndex)
            {
                return string.Empty;
            }
    
            CommandResult ICommand.Run(params string[] a_args)
            {
                ExampleStats.s_Health = 0;
                return new CommandResult("Success");
            }
        }
    
        private class AddMana : ICommand
        {
            string ICommand.Name => "AddMana";
            public int ArgCount => 1;
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
                return new CommandResult("Success");
            }
        }
    
        private class NoclipCommand : ICommand
        {
            string ICommand.Name => "Noclip";
            public int ArgCount => 0;
            string ICommand.GetArgName(int a_argIndex)
            {
                return string.Empty;
            }

            private GameObject noclipObj = null;
            CommandResult ICommand.Run(params string[] a_args)
            {
                if (noclipObj == null)
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
                    GameObject.Destroy(noclipObj);
                }

                return new CommandResult("Success");
            }
        }
    
        private class SetPositionCommand : ICommand
        {
            string ICommand.Name => "SetPosition";
            public int ArgCount => 3;
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
    
                return new CommandResult("GO: " + KDebug.Console.CommandContext.name + " moved to: " + KDebug.Console.CommandContext.transform.position);
            }
        }

        private class TranslateCommand : ICommand
        {
            string ICommand.Name => "Translate";
            public int ArgCount => 4;
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
    
                return new CommandResult("GO: " + KDebug.Console.CommandContext.name + " translated to: " + KDebug.Console.CommandContext.transform.position);
            }
        }
    
        private class SetRotationCommand : ICommand
        {
            string ICommand.Name => "SetRotation";
            public int ArgCount => 4;
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
                return new CommandResult("Success");
            }
        }
    
        private class CreateGarbage : ICommand
        {
            string ICommand.Name => "CreateGarbage";
            public int ArgCount => 1;
            string ICommand.GetArgName(int a_argIndex)
            {
                return a_argIndex == 0 ? "MB" : string.Empty;
            }
    
            private class MBGarbage
            {
                byte[] garbage = new byte[1024 * 1024];
            }
    
    
            CommandResult ICommand.Run(params string[] a_args)
            {
                if (int.TryParse(a_args[0], out int Mbs))
                {
                    List<MBGarbage> list = new List<MBGarbage>();
                    for (int i = 0; i < Mbs; ++i)
                    {
                        MBGarbage garbage = new MBGarbage();
                        list.Add(garbage);
                    }
                }

                return new CommandResult("Success");
            }


        }
        private class Log : ICommand
        {
            public string Name => "Log";
            public int ArgCount => 1;

            string ICommand.GetArgName(int a_argIndex)
            {
                return a_argIndex == 0 ? "Message" : string.Empty;
            }

            CommandResult ICommand.Run(params string[] a_args)
            {
                string final = string.Empty;

                for (int i = 0; i < a_args.Length; ++i)
                {
                    final += a_args[i] + " ";
                }

                LogData logData = new LogData(final);

                s_logFile.WriteLine(logData.PrintLog);
                return new CommandResult(logData.PrintLog);
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
            KDebug.Console.RegisterCommand(new CreateGarbage());
            KDebug.Console.RegisterCommand(new Log());
        }
    }
}
