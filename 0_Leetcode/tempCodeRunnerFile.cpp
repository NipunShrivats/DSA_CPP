// Leap Year problem

// ---> Conditions
// 1. should be divisible by 400.
// 2. should be divisible by 4 & at ṭhe same time not divisible by 100.

#include <iostream>
using namespace std;

string leapYear(int year)
{
    if (year % 400 == 0)
    {
        return "true";
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}
int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    cout << leapYear(year);
    return 0;
}