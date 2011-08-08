#include <cstdlib>
#include <iostream>

using namespace std;

unsigned long sum;
unsigned long fibonacci(unsigned long n);

int main(int argc, char *argv[])
{
    int i = 0;
    while (fibonacci(i) < 4000000) {
          if (fibonacci(i) % 2 == 0)
             sum += fibonacci(i);
          cout << i << endl;
          i++;      
    }
    cout << "Sum of even numbers: " << sum << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

unsigned long fibonacci(unsigned long n)
{
         int fib = 0;
         int fib1 = 1;
         int fib2 = 0;
    if (n ==0 || n == 1)
    {
           return n;
    }
    for (int i = 2; i <= n; i++)
    {
        fib = fib1+fib2;
        fib2 = fib1;
        fib1 = fib;
        }
        return fib;
}
