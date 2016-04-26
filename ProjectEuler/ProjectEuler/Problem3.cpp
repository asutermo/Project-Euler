#include "Problem.h"
#include "ProblemHelpers.h"

long long ProblemThree()
{
    unsigned long long num = 600851475143;
    unsigned long long largest_prime = 0;
    unsigned long long i = 2;
    unsigned long long pf_check = 2;

    while (i < num)
    {
        if (prime_factor(i) && num % i == 0)
            largest_prime = i;
        ++i;
    }
    return largest_prime;
}