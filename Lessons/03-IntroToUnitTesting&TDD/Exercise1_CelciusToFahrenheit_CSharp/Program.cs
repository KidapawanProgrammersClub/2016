using System;

namespace Exercise1_CelciusToFahrenheit_CSharp
{
    public class Exercise1_CelciusToFahrenheit_CSharp
    {
        // static double convertCelciusToFahrenheit(double valueInCelcius) {
            
        // }

        static void runTests()
        {
            double result;
            string message;

            Console.Write("test 1: ");
            result = convertCelciusToFahrenheit(5.0);
            message = (result == 41.0) ? "passed" : "failed"; // it is not really good to compare floats or doubles using "==", but we will do it here for simplicity
            Console.WriteLine(message);
            
            Console.Write("test 2: ");
            result = convertCelciusToFahrenheit(1.0);
            message = (result == 33.8) ? "passed" : "failed";
            Console.WriteLine(message);
            
            Console.Write("test 3: ");
            result = convertCelciusToFahrenheit(12.1234323);
            message = (result == 53.82217814) ? "passed" : "failed";
            Console.WriteLine(message);            
        }
        
        public static void Main(string[] args)
        {
            runTests();
        }
    }
}
