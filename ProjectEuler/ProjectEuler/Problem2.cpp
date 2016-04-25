#include "Problem.h"
#include "ProblemHelpers.h"

long ProblemTwo()
{
    long sum = 0;
    int i = 0;
    while (fibonacci(i) < 4000000) {
        if (fibonacci(i) % 2 == 0)
            sum += fibonacci(i);
        i++;
    }

    return sum;
}
