using System;

public static class Darts
{

        public static int Score(double x, double y)
        {
            double distance = Math.Sqrt(x * x + y * y);
            if (distance == 0) return 10;
            if (distance <= 1) return 10;
            if (distance >= 1 && distance <= 5) return 5;
            if (distance <= 10 && distance >= 5) return 1;
            return 0;
        }
}
