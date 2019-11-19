namespace KDebugPackage.Log
{
     struct Timestamp
     {
          public readonly int Hour;
          public readonly int Minute;
          public readonly int Second;
          
          public Timestamp(int a_hour, int a_minute, int a_second)
          {
              Hour = a_hour;
              Minute = a_minute;
              Second = a_second;
          }
          
          public static Timestamp Now()
          {
              return new Timestamp(System.DateTime.Now.Hour, System.DateTime.Now.Minute, System.DateTime.Now.Second);
          }
          
          public override string ToString()
          {
              return Hour + ":" + Minute + ":" + Second;
          }
     }

     enum LogType
     {
         Log,
         Warning,
         Error,
         Assertion
     }

     struct LogData
     {
         public LogType Type { get; }

         private Timestamp _timestamp;
         public Timestamp GetTimestamp => _timestamp;
         public string Value { get; set; }
         public bool HasValue => string.IsNullOrEmpty(Value) == false;

         public string PrintLog => _timestamp.ToString() + ": " + Value;

         public LogData(LogType a_type, string a_value)
         {
             Type = a_type;
             _timestamp = Timestamp.Now();
             Value = a_value;
         }

     }
}