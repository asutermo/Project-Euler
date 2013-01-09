#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	const int MAX = 2000000;
	bool prime = true;
	int numberRoot;

	long long primeSum = 0;

	for (int i = 2; i < MAX; i++) {
		numberRoot = sqrt(i);
		for (int j = 2; j <= numberRoot; j++) {
			if (i % j == 0) {
				prime = false;
				break;
			}		
		}	
		if (prime) {
			primeSum += i;
		}
		else {
			prime = true;
		}
	}
	cout << "Prime sum " << primeSum << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}