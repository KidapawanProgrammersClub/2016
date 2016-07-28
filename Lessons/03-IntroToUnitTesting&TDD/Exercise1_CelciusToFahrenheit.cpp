#include <iostream>
#include <iomanip>
using namespace std;


//double convertCelciusToFahrenheit(double valueInCelcius) {
//	
//}

void runTests()
{
    double result;
    string message;

    cout << "test 1: ";
    result = convertCelciusToFahrenheit(5.0);
    message = (result == 41.0) ? "passed" : "failed"; // it is not really good to compare floats or doubles using "==", but we will do it here for simplicity
    cout << message << endl;
    
    cout << "test 2: ";
    result = convertCelciusToFahrenheit(1.0);
    message = (result == 33.8) ? "passed" : "failed";
    cout << message << endl;
    
    cout << "test 3: ";
    result = convertCelciusToFahrenheit(12.1234323);
    message = (result == 53.82217814) ? "passed" : "failed";
    cout << message << endl;    
    
}

int main ()
{
	//cout << setprecision(20) << 3.6 << endl;
    runTests();
}
