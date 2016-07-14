#include <iostream>
#include <math.h>
using namespace std;

int powerFunctionForInts(int base, int exponent)
{
	int product = base;
	for (int i = 1; i < exponent; i++)
	{
		product *= base;
	}

	return product;
}

int main()
{
	// using the power function for integers that we created above
	int powIntResult = powerFunctionForInts(2, 3);
	cout << powIntResult << endl;

	// using the pow() function from the standard library math.h
	double resultOfPowFromStdMathLib = pow(2, 3);
	cout << resultOfPowFromStdMathLib << endl;

	return 0;
}
