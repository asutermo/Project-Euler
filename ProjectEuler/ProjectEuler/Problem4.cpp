#include "Problem.h"
#include "ProblemHelpers.h"
#include <vector>
using namespace std;

bool compare(int number)
{
    int newNum;
    std::vector<int> nums;
    while (number > 0)
    {
        newNum = number % 10;
        int newnewNum = number / 10;
        nums.push_back(newNum);
        number = newnewNum;
        
    }

    bool isPalindrome = true;
    int midPoint = nums.size() / 2;
    for (size_t i = 0; i < midPoint; ++i)
    {
        if (nums[i] != nums[nums.size() - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    return isPalindrome;

}

int ProblemFour() {
    int maxPalindrome = 0;
    for (int i = 999; i >= 100; i--)
    {
        for (int j = 999; j >= 100; j--)
        {
            int number = i * j;

            //divide and modulo number
            if (compare(number))
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