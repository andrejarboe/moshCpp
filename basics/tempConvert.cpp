#include <iostream>

using namespace std;

int main()
{
    cout << "Fahrenheit: ";
    int farrenheit;
    cin >> farrenheit;

    // cel;sius to farrenheit is:
    // (f - 32)/1.8
    double celsius = (farrenheit - 32) / 1.8;
    cout << celsius;

    return 0;
}