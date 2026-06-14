#include "rotational_cipher.h"

namespace rotational_cipher {

    std::string rotate(std::string input, int key)
    {
        std::string output;
        

        for(char c : input)
        {
            int pos = 0;  
            if(isupper(c))      pos = c - 'A';
            else if(islower(c)) pos = c - 'a';

            if(isspace(c) || isdigit(c) || ispunct(c)) 
            {
                output += c;
            }
            else if(isalpha(c)) 
            {
                int shifted = (pos + key) % 26;
                if(isupper(c))       shifted += 'A';
                else if(islower(c))  shifted += 'a';

                output += static_cast<char>(shifted);
            }
        }
        return output;
    }
// TODO: add your solution here

}  // namespace rotational_cipher
