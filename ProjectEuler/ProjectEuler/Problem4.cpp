#include "Problem.h"
#include "ProblemHelpers.h"

int ProblemFour() {
    int maxPalindrome = 0;
    for (int i = 999; i >= 100; i--) 
    {
        for (int j = 999; j >= 100; j--) 
        {
            int number = i * j;
            string possiblePalindrome = ConvertInt(number);
            string reverse = ReverseString(possiblePalindrome);
            if (possiblePalindrome.compare(reverse) == 0)
            {
                if (number > maxPalindrome) {
                    maxPalindrome = number;
                    break;
                }
            }
        }
    }
    return maxPalindrome;
}