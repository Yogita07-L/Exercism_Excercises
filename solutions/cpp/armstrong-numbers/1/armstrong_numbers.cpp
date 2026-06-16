#include "armstrong_numbers.h"
#include<cmath>
#include<string>

namespace armstrong_numbers {

// TODO: add your solution here
    bool is_armstrong_number(int number)
    {
        int sum = 0;
        std::string num = std::to_string(number);
        int size = num.length();
        for(auto dig:num)
            {
                sum +=pow(std::stoi(&dig), size);
            }
        if(sum == number)
            return true;
        return false;
    }

}  // namespace armstrong_numbers   
