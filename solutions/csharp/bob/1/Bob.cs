using System;
using System.Linq;
public static class Bob
{
    public static string Response(string input)
    {
        if (string.IsNullOrWhiteSpace(input))
        {
            return "Fine. Be that way!";
        }
        else if (input.TrimEnd().EndsWith("?"))
        {
            if (IsYelling(input))
            {
                return "Calm down, I know what I'm doing!";
            }
            else
            {
                return "Sure.";
            }
        }
        else if (IsYelling(input))
        {
            return "Whoa, chill out!";
        }
        else
        {
            return "Whatever.";
        }
    }

    private static bool IsYelling(string input)
    {
        return input.Any(char.IsLetter) && input.ToUpper() == input;
    }
}
