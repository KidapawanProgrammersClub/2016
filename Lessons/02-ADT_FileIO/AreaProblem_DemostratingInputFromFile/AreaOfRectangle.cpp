#include <iostream>

using namespace std;

int main()
{
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);    
    //freopen("test.err", "w", stderr);

    int num1, num2, counter = 1;
    while(true)
    {
        cin >> num1 >> num2;
        if(num1 == 0 && num2 == 0)
        {
            break;
        }

        int area = num1 * num2;
        cout << "#" << counter << ": " << area << endl;
        ++counter;
    }

    return 0;
}