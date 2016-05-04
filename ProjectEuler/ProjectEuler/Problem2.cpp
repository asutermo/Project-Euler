#include "Problem.h"
#include "ProblemHelpers.h"

long ProblemTwo()
{
    long sum = 0;
    int i = 0;
    while (Fibonacci(i) < 4000000) {
        unsigned long val = Fibonacci(i);
        if (val % 2 == 0)
            sum += val;
        i++;
    }

    return sum;
}
