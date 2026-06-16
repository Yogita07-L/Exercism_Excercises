using System;

static class LogLine
{
        public static string Message(string log)
        {
            int startIndex = log.IndexOf(':');
            

            if (startIndex != -1 && log.Length - 1 > startIndex)
            {
                startIndex++;
               return log.Substring(startIndex, log.Length - startIndex).Trim();
            }
            else
                return log;
        }

        public static string LogLevel(string logLine)
        {
            int startIndex = logLine.IndexOf("[");
            int endIndex = logLine.IndexOf("]");
            return logLine.Substring(startIndex + 1, endIndex-1).Trim().ToLower();
            
        }                                                             public static string Reformat(string logLine)
        {
            return ($"{Message(logLine)} ({LogLevel(logLine)})");
        }
}
