#include <iostream>
using namespace std;

// 1. Pass by value :-
// value is taken in the function using the variable value

// int incr(int n) // value not changed in the address
// {
//     return ++n;
// }

// int main()
// {
//     int a = 10;
//     cout << incr(a) << endl;
//     cout << a; // value of a will remain 10 as n is incremented by 1.
// }
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

// 2. Pass by reference :-
// value is taken in the function using address of the valriable

// int incr(int &n) // here the value will be changed in the adress of the valriable taken in the argument i.e "a"
// {
//     return ++n;
// }

// int main()
// {
//     int a = 10;
//     cout << incr(a) << endl;
//     cout << a; // value of a will remain 10 as n is incremented by 1.
// }

// ----
// swapping values as example

// 1. pass by value
// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter value of a:";
//     cin >> a;
//     cout << "Enter value of b:";
//     cin >> b;

//     swap(a, b);
//     cout << a << ", " << b;
// }
// ------------------------
// 2. pass by reference

// void swap(int &a, int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter value of a:";
//     cin >> a;
//     cout << "Enter value of b:";
//     cin >> b;

//     swap(a, b);
//     cout << a << ", " << b;
// }
