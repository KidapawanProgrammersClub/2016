#include <vector>
#include <iostream>

using namespace std;

int computeAverage(vector<int> vecOfNumbers)
{
   double sum = 0;
   for(int i = 0; i < vecOfNumbers.size(); i++)
   {
      sum += vecOfNumbers[i];
   }
   double average = sum / vecOfNumbers.size();

   return   average;
}

int main()
{
   vector<int> vectorOfNumbers;

   cout << "Please enter your positive numbers and I will compute their average value.\n";
   cout << "I will stop reading your input if I see the number zero\n";
   double number;
   while(cin >> number)
   {
      if(number <= 0) 
         break;
      vectorOfNumbers.push_back(number);
   }

   double average = computeAverage(vectorOfNumbers);
   cout << "The average is " << average;
   
   return 0;
}
