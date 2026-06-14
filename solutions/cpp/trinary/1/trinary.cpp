#include "trinary.h"
#include<string>
#include<cmath>
namespace trinary {

    int to_decimal(std::string num)
    {
        int decimal = 0;
        int count = num.size() - 1;
        for(auto pos : num)
            {
                int digit = std::atoi(&pos);
                decimal += digit * pow(3, count);  
                count--;
            }
        return decimal;
    }
    
}  // namespace trinary
