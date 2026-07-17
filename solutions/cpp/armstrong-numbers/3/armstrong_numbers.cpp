#include "armstrong_numbers.h"
#include<cmath>
#include<string>

namespace armstrong_numbers {

// TODO: add your solution here
    bool is_armstrong_number(int number)
    {
        int original =  number;
        int temp = number;
        int digits = 0;
        int sum = 0;
        do
        {
            digits++;
            temp = temp/10;
        } while (temp > 0);
        
        temp = number;
        do
        {
            int dig = temp % 10;
            temp = temp/10;
            sum += static_cast<int>(std::pow(dig, digits));
        } while (temp > 0);
        
        
        if(sum == original)
            return true;
        return false;
    }

}  // namespace armstrong_numbers   
