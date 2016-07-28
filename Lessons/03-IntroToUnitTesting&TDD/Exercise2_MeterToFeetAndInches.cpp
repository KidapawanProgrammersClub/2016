#include <iostream>
using namespace std;

/*
double convertCelciusToFahrenheit(double valueInCelcius) {

}
*/

void runTests()
{
    double result;
    string message;

    //--- test 1 ---
    cout << "test 1: ";
    result = convertMeterToFeetAndInches(5.0);
    message = (result == 41.0) ? "passed" : "failed";
    cout << message << endl;
    
    //--- test 2 ---
    cout << "test 2: ";
    result = convertMeterToFeetAndInches(1.0);
    message = (result == 33.8) ? "passed" : "failed";
    cout << message << endl;
}

int main ()
{
    runTests();
}
