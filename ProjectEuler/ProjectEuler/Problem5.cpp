#include "Problem.h"

unsigned long ProblemFive()
{
    int i = 0;
    unsigned long number = 0;
    bool foundNumber = false;

    while (!foundNumber) {
        number++;
        for (int i = 1; i <= 20; i++) {
            if (number % i != 0) {
                foundNumber = false;
                break;
            }
            else {
                foundNumber = true;
            }
        }
    }
    return number;
}
