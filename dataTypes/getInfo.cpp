#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

     string name;
     cout << "Enter your name: ";
     getline(cin, name);

     string street;
     cout << "Enter your street: ";
     getline(cin, street);

     string city;
     cout << "Enter your city: ";
     getline(cin, city);

     string state;
     cout << "Enter your state: ";
     getline(cin, state);

     string zipCode;
     cout << "Enter your zip code: ";
     getline(cin, zipCode);

     cout << name << endl
          << street << endl
          << city << ", " << state << ", " << zipCode;

     return 0;
}