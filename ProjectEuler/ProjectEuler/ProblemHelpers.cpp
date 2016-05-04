#include "ProblemHelpers.h"
#include <sstream>

unsigned long Fibonacci(unsigned long n)
{
    int fib = 0;
    int fib1 = 1;
    int fib2 = 0;
    if (n == 0 || n == 1)
    {
        return n;
    }
    for (unsigned long i = 2; i <= n; i++)
    {
        fib = fib1 + fib2;
        fib2 = fib1;
        fib1 = fib;
    }
    return fib;
}

bool PrimeFactor(unsigned long long pf_check)
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

string ConvertInt(long long number)
{
    stringstream ss;
    ss << number;
    return ss.str();
}

string ReverseString(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        result = str[i] + result;
    }
    return result;
}