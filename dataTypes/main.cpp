#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     double price = 99.99;

     // with out F, compiler will treat it as a double
     float interestRate = 3.67F;

     // without L or l, compiler will treat it as an int
     long fileSize = 9000L;

     char letter = 'a';

     bool isValid = false;

     float num = {1.2};
     // makes it 0
     int number = {};
     cout << num;

     cout << number;

     int ff = 255;
     cout << ff << endl;

     int sdf = 1'000'000;
     // short another{sdf};

     // cout << "another: " << another;

     // format data
     // cout << "Spring"
     //      << "Nice" << endl
     //      << "Summer"
     //      << "Hot";

     cout << left;
     cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
          << setw(10) << "Summer" << setw(10) << "Hot" << endl;

     cout << 12.34567 << endl
          << fixed << 12.34567 << endl
          << fixed << setprecision(4) << 12.34567;

     cout << endl;

     // cout << numeric_limits<int>::min() << endl;

     // bool
     bool isNewUser = false;
     cout << boolalpha << isNewUser;
     cout << noboolalpha << isNewUser;

     //char
     char ch = 'a';
     cout << ch;
     cout << +ch;

     //strings
     string name;
     cout << "Enter your name: ";
     getline(cin, name);
     cout << name;


     return 0;
}