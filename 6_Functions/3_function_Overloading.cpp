// function overloading
// multiple functions with same func NAME can exist only if the parameters of all same named functions are of different data types.

#include <iostream>
using namespace std;

// "swap" is also an inbuilt function in c++ so it will also work.
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(float &f1, float &f2)
{
    float tempF;
    tempF = f1;
    f1 = f2;
    f2 = tempF;
}

int main()
{
    int a = 1, b = 2;
    swap(a, b);
    cout << a << ", " << b << endl;

    float f1 = 22.2, f2 = 11.1;
    swap(f1, f2);
    cout << f1 << ", " << f2;
}