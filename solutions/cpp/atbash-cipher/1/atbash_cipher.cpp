#include "atbash_cipher.h"
#include<string>

namespace atbash_cipher {
    std::string encode(std::string code)
    {
        std::string cipher_code = "";
        int counter = 0;
        for(const auto itr:code)
            {
                if(itr == ' ') continue;
                if(isdigit(itr))
                {
                    if (counter > 0 && counter % 5 == 0) cipher_code += ' ';
                    cipher_code += itr;
                    counter++;
                }
                else if(isalpha(itr))
                {
                    char lower_itr = std::tolower(itr);
                    if (counter > 0 && counter % 5 == 0) cipher_code += ' ';
                    cipher_code += (25 - (lower_itr - 'a')) + 'a';
                    counter++;
                }         
            }
        return cipher_code;
    }

    std::string decode(std::string code)
    {
        std::string decode_output = "";
        for(const auto itr:code)
            {
                if(itr == ' ') continue;
                if(isdigit(itr))
                {
                    decode_output += itr;
                }
                else if(isalpha(itr))
                {
                    char lower_itr = std::tolower(itr);
                    decode_output += (25 - (lower_itr - 'a')) + 'a';
                }         
            }
        return decode_output;
    }
}  // namespace atbash_cipher
