#include "Problem.h"

int ProblemSeven() {
    const int MAX_PRIME = 10000;
    int primeCount = 0;
    bool prime = true;
    int currentNumber = 1;
    int numberRoot;

    while (primeCount <= MAX_PRIME) {

        currentNumber++;
        numberRoot = sqrt(currentNumber);
        for (int i = 2; i <= numberRoot; i++) {
            if (currentNumber % i == 0) {
                prime = false;
            }
        }
        if (prime) {
            primeCount++;
        }
        else {
            prime = true;
        }
    }
    return currentNumber;
}