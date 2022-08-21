#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    // time(0) is elapsed seconds from Jan 1 1970
    srand(time(0));
    int number = rand() % 10; // make upper limit 10
    cout << "Random number: " << number << endl;
    return 0;
}