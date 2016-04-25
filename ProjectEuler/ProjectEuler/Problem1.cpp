#include "Problem.h"

int ProblemOne()
{
    int sum = 0;
    int i = 0;
    while (i < 1000)
    {
        if ((i % 3) == 0 || (i % 5) == 0)
            sum += i;
        i++;
    }

    return sum;
}
