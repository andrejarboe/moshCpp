#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;
int main()

{
    cout << "Enter radius ";
    float radius;
    cin >> radius;

    // area of a cirlce is pi * r^2
    float circelArea = M_PI * pow(radius, 2);
    cout << "The area of a circle with radius " << radius
         << endl << " is: " << circelArea << endl;
    return 0;
}