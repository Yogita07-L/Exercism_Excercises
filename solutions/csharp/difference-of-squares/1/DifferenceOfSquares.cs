using System;

public static class DifferenceOfSquares
{

        public static int CalculateSquareOfSum(int n)
        {
            int sum = n * (n + 1) / 2;
            return (int)Math.Pow(sum, 2);
        }

public static int CalculateSumOfSquares(int max)
{
    int square = 0;
    for (int i = 1; i <= max; i++)
    {
        square += (int)Math.Pow(i, 2);
    }
    return square;
}
        public static int CalculateDifferenceOfSquares(int max)
        {
            return CalculateSquareOfSum(max)-CalculateSumOfSquares(max);
        }
}