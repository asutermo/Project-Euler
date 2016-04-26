#include "Problem.h"
#include "ProblemHelpers.h"

long long ProblemFour() {
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