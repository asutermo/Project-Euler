#include <cstdlib>
#include <iostream>

#include "Problem.h"

using namespace std;

int main(int argc, char *argv[])
{
    int solution = ProblemOne();
    std::cout << "Problem 1: " << solution << std::endl;

    long solution2 = ProblemTwo();
    std::cout << "Problem 2: " << solution2 << std::endl;

    //long long solution3 = ProblemThree();
    //std::cout << "Problem 3: " << solution3 << std::endl;

    int solution4 = ProblemFour();
    std::cout << "Problem 4: " << solution4 << std::endl;

    int solution5 = ProblemFive();
    std::cout << "Problem 5: " << solution5 << std::endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
