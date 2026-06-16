#include "bob.h"
#include<string>
#include <algorithm> 
#include <ctype.h>
namespace bob {

// TODO: add your solution here
    std::string hey(std::string input)
    {
        bool allCaps = true;
        bool hasLetter = false;
        bool isSilence = true;
    
        if (input.empty())
        return "Fine. Be that way!";


        int i = input.size() - 1;
        while (i >= 0 && std::isspace(static_cast<unsigned char>(input[i])))
        {
            i--;
        }

        bool isQuestion = (i >= 0 && input[i] == '?');
        
        for(char c : input)
        {
            if(!isspace(c))
            {
                isSilence = false;
            }
        
            if(isalpha(c))
            {
                hasLetter = true;
        
                if(islower(c))
                {
                    allCaps = false;
                }
            }
        }
        if(isSilence)
        {
            return "Fine. Be that way!";
        }
        if(isQuestion && allCaps && hasLetter)
        {
            return "Calm down, I know what I'm doing!";
        }
        if(isQuestion)
        {
            return "Sure.";            
        }
        if(hasLetter && allCaps)
        {
            return "Whoa, chill out!";
        }
        return "Whatever.";
    }
}  // namespace bob
