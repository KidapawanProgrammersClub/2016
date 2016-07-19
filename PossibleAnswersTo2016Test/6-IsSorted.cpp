#include <iostream>

using namespace std;

bool IsSorted(int arr[], int size)
{
	int previousNum, currentNum;
	for(int i = 1; i < size ; i++)
	{
		previousNum = arr[i - 1];
		currentNum = arr[i];
		
		if(previousNum > currentNum)
			return false;
	}
	
	return true;
}

int main()
{
	const int SIZE = 5;
	int sortedArray[] = {1, 2, 3, 4, 5};
	int notSortedArray[] = {1, 2, 9, 8, 10};
	
	cout << boolalpha;
	cout << "Is first array sorted? -> " << IsSorted(sortedArray, SIZE) << endl;
	cout << "Is second array sorted? -> " << IsSorted(notSortedArray, SIZE) << endl;
	cout << noboolalpha;	
	// "boolalpha" and "noboolalpha" are format manipulators
	// By default, cout will display "1" for the boolean value 'true'
	//		and it will display "0" for the boolean value 'false'
	// We can use "boolalpha" if we want to display "true"/"false" instead of "1"/"0"
	
	cout << endl;
	cout << "Is first array sorted? -> " << IsSorted(sortedArray, SIZE) << endl;
	cout << "Is second array sorted? -> " << IsSorted(notSortedArray, SIZE) << endl;
		
	//cin.get();
	return 0;
}