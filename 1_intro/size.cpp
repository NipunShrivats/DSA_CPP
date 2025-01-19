#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int a = 23;
    cout << "sizeof a: " << sizeof(a) << "bytes" << endl;

    // finding limits
    cout << "INT_MIN: " << INT_MIN << endl;
    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "UINT_MAX: " << UINT_MAX << endl;
    return 0;
}