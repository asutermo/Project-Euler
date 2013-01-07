#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <sstream>

using namespace std;

string convertInt(long long number)
{
   stringstream ss;
   ss << number;
   return ss.str();
}

string reverseString(string str) 
{
	string result = "";
	for (int i = 0; i < str.length(); i++) {
		result = str[i] + result;
	}
	return result;
}

long long findPalindrome() {
	long long maxPalindrome = 0;
	for (int i = 999; i >= 100; i--) {
		for (int j = 999; j >= 100; j--) {
			long long number = i * j;
			string possiblePalindrome = convertInt(number);
			string reverse = reverseString(possiblePalindrome); 
			if (possiblePalindrome.compare(reverse) == 0)
			{ 
				if (number > maxPalindrome) {
					maxPalindrome = number;
				}
			}
		}
	}	
	return maxPalindrome;
}

int main(int argc, char *argv[])
{
	cout << "Biggest palindrome is: " << findPalindrome() << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

