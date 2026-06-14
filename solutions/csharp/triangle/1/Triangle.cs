using System;

public static class Triangle
{
        public static bool IsScalene(double s1, double s2, double s3)
        {
            if (IsTriangle(s1,s2,s3) && s1 != s2 && s2 != s3 && s3 != s1) 
                return true;
            return false;   
        }
        public static bool IsIsosceles(double s1, double s2, double s3) 
        {
            if(IsTriangle(s1, s2, s3) && !IsScalene(s1, s2, s3)) 
                return true;
            return false;
        }
        public static bool IsEquilateral(double s1, double s2, double s3)
        {
            if(IsTriangle(s1, s2, s3) && s1 ==s2  && s2==s3 && s3==s1) return true;
            return false;
        }
        public static bool IsTriangle(double s1, double s2, double s3)
        {
            if(s1+s2>=s3 && s1+s2+s3 > 0 && s2+s3 >= s1&& s1+s3 >=s2) return true;
            return false;
        }
}