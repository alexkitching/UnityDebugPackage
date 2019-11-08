using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public partial class KDebug
{
    private class KWinLog : ILog
    {
        private System.IO.StreamWriter _streamWriter = StreamWriter.Null;

        public bool Initialise(string a_path)
        {
            try
            {
                _streamWriter = System.IO.File.CreateText(a_path);
            }
            catch (Exception e)
            {
                Debug.Log(e);
                return false;
            }

            return true;
        }

        public void WriteLine(string a_value)
        {
            if (_streamWriter != StreamWriter.Null)
            {
                _streamWriter.WriteLine(a_value);
            }
        }


        public bool Shutdown()
        {
            try
            {
                _streamWriter.Close();
                _streamWriter = StreamWriter.Null;
            }
            catch (Exception e)
            {
                Debug.Log(e);
                return false;
            }

            return true;
        }
    }
}