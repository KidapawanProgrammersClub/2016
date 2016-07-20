#include <iostream>
using namespace std;

// returns the nth fibonacci number
int fib(int n)
{
    if(n == 1 || n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}


int main ()
{
    const int N = 10;
    for(int i = 1; i <= N; i++)
    {
        cout << fib(i) << " ";
    }
}