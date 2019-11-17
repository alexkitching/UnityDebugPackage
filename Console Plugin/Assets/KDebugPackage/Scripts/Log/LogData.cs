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

     struct LogData
     {
         private Timestamp timestamp;
         public Timestamp GetTimestamp => timestamp;
         private readonly string value;
         public string Value => value;

         public string PrintLog => timestamp.ToString() + ": " + value;

         public LogData(string a_value)
         {
             timestamp = Timestamp.Now();
             value = a_value;
         }
     }
}