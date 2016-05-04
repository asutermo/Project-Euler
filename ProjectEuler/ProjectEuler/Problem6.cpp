#include "Problem.h"

int ProblemSix()
{
    const int N = 100;
    int i = 0;
    int sumOfSquares = N * (N + 1) * (2 * N + 1) / 6;
    int squareOfSum = pow((N * (N + 1) / 2), 2);
    return (squareOfSum - sumOfSquares);
}
