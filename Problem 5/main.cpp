#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
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

    cout << "Smallest number that is evenly divisible: " << number << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}