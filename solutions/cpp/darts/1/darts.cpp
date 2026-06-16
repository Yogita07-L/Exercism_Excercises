#include "darts.h"

namespace darts {
    int score(float x, float y)
    {
        int final_score = 0;
        
        if(x == 0 && y == 0)
        {
            final_score = 10;
        }
        else if ((x * x + y * y) <= 1)
        {
            final_score = 10;
        }
        else if ((x * x + y * y) <= 25)
        {
            final_score = 5;
        }
        else if ((x * x + y * y) <= 100)
        {
            final_score = 1;
        }
        return final_score;
    }
    

}  // namespace darts
