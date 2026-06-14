#include "reverse_string.h"
#include<string>
namespace reverse_string {

// TODO: add your solution here
    std::string reverse_string(std::string input)
    {
        std::string reverse = "";
        for(long signed int itr = input.size()-1; itr >= 0 ; itr--){
            reverse += input[itr];            
        }
        return reverse;
    }

}  // namespace reverse_string
