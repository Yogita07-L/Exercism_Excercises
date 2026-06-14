#include "luhn.h"

#include <string>
#include <iostream>
#include <vector>
namespace luhn {

    bool valid(std::string number)
    {
        int digitCount = 0;
        int sum = 0;
        for(int itr = number.size()- 1; itr >= 0; itr--)
            {
                if(isspace(number[itr])) continue;
                if(isdigit(number[itr]))
                {
                    digitCount++;
                    int num = number[itr] - '0';

                    if(digitCount % 2 ==0)
                    {
                        num *= 2;
                        if(num > 9)
                        {
                            num -= 9;
                        }
                    }

                    sum += num;
                }
                else{
                    return false;
                }
            }
        if((digitCount >= 2) && ((sum % 10) == 0))
        {
            return true;
        }
            
        return false;
    }
// TODO: add your solution here

}  // namespace luhn
