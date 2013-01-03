#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
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
	cout << "Prime count " << primeCount << " Last prime is " << currentNumber << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}