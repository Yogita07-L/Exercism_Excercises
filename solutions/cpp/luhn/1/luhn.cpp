#include "luhn.h"

#include <string>
#include <iostream>
#include <vector>
namespace luhn {

    bool valid(std::string number)
    {
        if(number.size() <= 1) return false;
        std::vector<int> result;
        int pos = 0;
        for(int itr = number.size()- 1; itr >= 0; itr--)
            {
                if(isspace(number[itr])) continue;
                if(isdigit(number[itr]))
                {
                    pos++;
                    int num = number[itr] - '0';

                    if(pos % 2 ==0)
                    {
                        num = num * 2;
                        if(num > 9)
                        {
                            num -= 9;
                        }
                    }

                    result.push_back(num);
                }
                else{
                    return false;
                }
            }
        int sum = 0;
        for(const auto itr:result)
        {
            sum += itr;
        }
        if((pos >= 2) && ((sum % 10) == 0))
        {
            return true;
        }
            
        return false;
    }
// TODO: add your solution here

}  // namespace luhn
