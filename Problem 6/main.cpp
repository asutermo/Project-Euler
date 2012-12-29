#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    const int N = 100;
    int i = 0;
    unsigned long sumOfSquares = N * (N + 1) * (2 * N + 1) / 6;
    unsigned long squareOfSum = pow((N * (N + 1) / 2), 2);
    cout << "Sum of squares: " << sumOfSquares << endl;
    cout << "Square of sum: " << squareOfSum << endl;
    cout << "The difference is: " << (squareOfSum - sumOfSquares) << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}