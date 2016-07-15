#include <stdio.h>
#include <stdlib.h>     /* abs */
#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	long long numOfSoldiers_1, numOfSoldiers_2, difference;
	while (cin >> numOfSoldiers_1 >> numOfSoldiers_2)
	{
		difference = abs(numOfSoldiers_1 - numOfSoldiers_2);
		cout << difference << endl;
	}

	return 0;
}