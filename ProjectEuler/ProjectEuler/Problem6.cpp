#include "Problem.h"

unsigned long  ProblemSix()
{
    const int N = 100;
    int i = 0;
    unsigned long sumOfSquares = N * (N + 1) * (2 * N + 1) / 6;
    unsigned long  squareOfSum = pow((N * (N + 1) / 2), 2);
    return (squareOfSum - sumOfSquares);
}
