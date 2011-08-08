#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int sum = 0;
    int i = 0;
    while (i < 1000)
    {
          if ((i % 3) == 0 || (i % 5) == 0)
             sum += i;
          i++;         
    }
             
    cout << "The sum is: " << sum << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
