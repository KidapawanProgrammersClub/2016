#include <iostream>
using namespace std;

// NOTE: code & explanation below are from http://www.tutorialspoint.com/cplusplus/cpp_references.htm
int main ()
{
    // A reference variable is an alias, that is, 
    // another name for an already existing variable.

    // declare simple variables
    int    i;
    double d;
    
    // declare reference variables
    int	    & r = i;
    double  & s = d;
    
    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r  << endl;
    
    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;
    
    return 0;
}