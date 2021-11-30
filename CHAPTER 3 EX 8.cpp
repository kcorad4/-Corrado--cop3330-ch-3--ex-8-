//cop3330 kyle corrado

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number = 0;

    cout << "enter an integer ";
    if (cin >> number)
    {
        if ((number % 2) == 0)
            cout << "the value " << number << " is even";
        else
            cout << "the value " << number << " is odd";
    }
    else
        cout << "the value is invalid";

    return 0;
}
