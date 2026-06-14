using System;

public static class PhoneNumber
{
        public static (bool IsNewYork, bool IsFake, string LocalNumber) Analyze(string phoneNumber)
        {
            if (phoneNumber.StartsWith("212") && phoneNumber.Substring(4, 3) == "555")
                return (true, true, phoneNumber.Substring(8));
            else if (!phoneNumber.StartsWith("212") && phoneNumber.Substring(4, 3) == "555")
                return (false, true, phoneNumber.Substring(8));
            else if (!phoneNumber.StartsWith("212") && phoneNumber.Substring(4, 3) != "555")
                return (false, false, phoneNumber.Substring(8));
            if (phoneNumber.StartsWith("212") && phoneNumber.Substring(4, 3) != "555")
                return (true, false, phoneNumber.Substring(8));
            return (false, false, phoneNumber.Substring(8));
        }

        public static bool IsFake((bool IsNewYork, bool IsFake, string LocalNumber) phoneNumberInfo)
        {
            return phoneNumberInfo.IsFake;
        }
}
