#include <iostream>
using namespace std;

// function declaration
void swap_pass_by_value(int x, int y);
void swap_pass_by_reference(int &x, int &y);

int main ()
{
    // local variable declaration:
    int a = 111;
    int b = 222;

    cout << "PASS BY VALUE\n";
    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;

    /* calling a function to swap the values using variable reference.*/
    swap_pass_by_value(a, b);

    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;

    cout << endl << endl;
    
    cout << "PASS BY REFERENCE\n";
    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;

    /* calling a function to swap the values using variable reference.*/
    swap_pass_by_reference(a, b);

    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;

    return 0;
}

void swap_pass_by_value(int x, int y)
{
   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}

void swap_pass_by_reference(int &x, int &y)
{
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}