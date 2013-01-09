#include <cstdlib>
#include <iostream>
#include "Limits.h"
using namespace std;

bool prime_factor(unsigned long long pf_check);

int main(int argc, char *argv[])
{
    unsigned long long num = 600851475143;
    unsigned long long largest_prime = 0;
    unsigned long long i = 2;
    unsigned long long pf_check = 2;
	
    while (i < num)
	{
		if (prime_factor(i) && num % i == 0)
			cout << i << " ";
		i++;
	}
    system("PAUSE");
    return EXIT_SUCCESS;
}

bool prime_factor(unsigned long long pf_check)
{
	unsigned long long j = 2;
	while (j < pf_check)
	{
		if (pf_check % j == 0 || pf_check % 2 == 0)
			return false;
		j++;
	}

	return true;
}