#include <iostream>
using namespace std;

// NOTE: code & explanation below are from http://www.tutorialspoint.com/cplusplus/cpp_pointers.htm
int main ()
{
    //----------------------------------------------------
    // every variable is a memory location and every memory location 
    // has its address defined which can be accessed using ampersand (&) operator     
    // char	    1 byte 
    // short	2 bytes 
    // int	    4 bytes
    // long	    4 bytes 
    // float	4 bytes 
    // double	8 bytes
    int  var1;
    char var2[10];

    cout << "Address of var1 variable: ";
    cout << &var1 << endl;

    cout << "Address of var2 variable: ";
    cout << &var2 << endl;








    //----------------------------------------------------
    int    *ip;    // pointer to an integer
    double *dp;    // pointer to a double
    float  *fp;    // pointer to a float
    char   *cp;    // pointer to character
    










    //----------------------------------------------------
    int  var = 20;   // actual variable declaration.
    int  *intPtr;        // pointer variable 

    intPtr = &var;       // store address of var in pointer variable
    cout << endl;
    cout << "Value of var variable: ";
    cout << var << endl;

    // print the address stored in ip pointer variable
    cout << "Address stored in intPtr variable: ";
    cout << intPtr << endl;

    // access the value at the address available in pointer
    cout << "Value of *intPtr variable: ";
    cout << *intPtr << endl;
        
    return 0;
}