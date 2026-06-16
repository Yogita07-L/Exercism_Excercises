#include "trinary.h"
#include<string>
#include<cmath>
namespace trinary {

    int to_decimal(std::string num)
    {
        int decimal = 0;
        for(auto c : num)
            {
                if(c >= '0' && c <= '2')
                {
                    int digit = c - '0';
                    decimal = decimal * 3 + digit;    
                } 
            }
        return decimal;
    }
    
}  // namespace trinary
