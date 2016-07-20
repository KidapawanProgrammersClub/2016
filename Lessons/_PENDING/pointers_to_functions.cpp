#include <iostream>
using namespace std;

void printVeryLongNameMessage()
{
    cout << "Your name is tooooooooooo long." << endl;
}

void printGreeting( string name, void (*fn)() )
{
    if(name.length() > 5)
        fn();
    else
        cout << "Hello, " << name << endl;
}

int main ()
{
    printGreeting("asdf", printVeryLongNameMessage);
    printGreeting("asdf qwer", printVeryLongNameMessage);
}