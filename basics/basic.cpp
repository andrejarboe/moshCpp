#include <iostream>

using namespace std;

int main()
{
     int x = 100;
     int y = 20;

     std::cout << "x = " << x << std::endl
               << "y = " << y << std::endl;

     // using namespace std;

     cout << endl
          << "x = " << x << endl
          << "y = " << y << endl
          << endl;

     // sales tax
     double sales = 95000;
     const double stateTax = .04;
     const double countyTax = .02;
     double totalTax = sales * (stateTax + countyTax);

     cout << "Your sales are: $" << sales << endl

          << "State tax is " << stateTax * 100 << "%: "
          << sales * stateTax << endl

          << "County tax is " << countyTax * 100 << "%: "
          << sales * countyTax << endl

          << "Your toral tax is: " << totalTax << endl;

     // reading data from the console
     cout << "Enter values for x and y: ";
     double r;
     double n;
     cin >> r >> n;
     cout << r + n;
     cout << endl;
     /*
           comments should explain whys and hows
     */

     return 0;
}