#include "rotational_cipher.h"
#include <cctype>

namespace rotational_cipher {

    std::string rotate(std::string input, int key)
    {
        std::string output;

        for(char c : input)
        {
            if(!isalpha(c))
            {
                output += c;
            }
            else
            {
                char base = isupper(c) ? 'A' : 'a';

                int pos = c - base;
                int shifted = (pos + key) % 26;

                output += static_cast<char>(shifted + base);
            }
        }

        return output;
    }

}  // namespace rotational_cipher