#include <iostream>
using namespace std;

// returns the nth fibonacci number
int pow(int base, int exponent)
{
    if(exponent == 0)
        return 1;
    else
        return base * pow(base, exponent - 1);
}

int main ()
{
    cout << "pow(2, 0) = " << pow(2, 0) << endl;
    cout << "pow(2, 1) = " << pow(2, 1) << endl;
    cout << "pow(2, 2) = " << pow(2, 2) << endl;
    cout << "pow(2, 3) = " << pow(2, 3) << endl;
    cout << "pow(2, 4) = " << pow(2, 4) << endl;
}