#include "Problem.h"
#include "ProblemHelpers.h"
#include <vector>
using namespace std;

long long ProblemThree()
{
    unsigned long long num = 600851475143;
    unsigned long long largest_prime = 0;
    unsigned long long i = 2;
    unsigned long long pf_check = 2;
    bool foundLargestPrimeFactor = false;

    std::vector<unsigned long long> primes;

    while (i < num)
    {
        if (num % i == 0 && PrimeFactor(i))
        {
            largest_prime = i;
            primes.push_back(largest_prime);
        }

        //check to see if all factors accounted for
        unsigned long long mult = 1;
        for (size_t j = 0; j < primes.size(); ++j)
        {
           mult *= primes[j];
           if (mult == num)
           {
               foundLargestPrimeFactor = true;
               break;
           }
        }

        if (foundLargestPrimeFactor)
            break;
        ++i;
    }
    return largest_prime;
}