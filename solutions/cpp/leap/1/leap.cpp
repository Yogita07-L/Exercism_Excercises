#include "leap.h"

namespace leap {

// TODO: add your solution here
    bool is_leap_year(int year){
    // 1. Must be divisible by 4
    if (year % 4 == 0) {
        // 2. If it's a century year, it MUST be divisible by 400
        if (year % 100 == 0) {
            return year % 400 == 0;
        }
        // 3. If not a century year, it's a leap year
        return true;
    }
        return false;
    }
    // 4. Not divisible by 4 at all
    
}  // namespace leap
