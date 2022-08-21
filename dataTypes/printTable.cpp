#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    /*
        cout the following:

        Course      Students
        C++                 100
        JavaScript           50
    */

    // mine
    short width = 15;
    cout << left;
    cout << setw(width) << "Course" << setw(width) << "Students" << endl
         << setw(width) << "C++" << setw(width) << right << "100" << left << endl
         << setw(width) << "JavaScript" << setw(width) << right << "50"
         << endl;

    // solution
    cout << left;
    cout << setw(15) << "Course" << setw(10) << "Students" << endl
         << setw(15) << "C++" << setw(10) << right << "100" << left << endl
         << setw(15) << "JavaScript" << setw(10) << right << "50" << left << endl;
    return 0;
}