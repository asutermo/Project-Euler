#include "Problem1.h"

void SolveProblemOne()
{
    int sum = 0;
    int i = 0;
    while (i < 1000)
    {
        if ((i % 3) == 0 || (i % 5) == 0)
            sum += i;
        i++;
    }

    cout << "The sum is: " << sum << endl;
}
