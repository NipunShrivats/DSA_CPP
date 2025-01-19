#include <iostream>  // preprocessor directives
using namespace std; // libtrary
int main()
{
    // cout<<"Hello World"<<endl;
    // cout<<"Hello World"<<"\n"<<"shabash"<<"\n";
    // ------------------------------------------------------
    // *variables*
    int age = 23;                                   // 4 bytes
    char gender = 'M';                              // 1 byte
    float pi = 3.14;                                // 4 bytes
    double pi2 = 3.1415926535897932384626433832795; // 8 bytes
    bool isMale = true;                             // 1 byte

    cout << sizeof(age) << " bytes" << "\n";
    cout << sizeof(gender) << " bytes" << "\n";
    cout << sizeof(pi) << " bytes" << "\n";
    cout << sizeof(pi2) << " bytes" << "\n";
    cout << sizeof(isMale) << " bytes" << "\n";

    // ------------------------------------------------------

    return 0; // returns an integer value
}