// recursion - when a function calls itself\

#include <iostream>
#include <cmath>
using namespace std;

// int Natural(int n)
// {
//     // 1. base
//     if (n == 0)
//     {
//         return 0;
//     }

//     // 2. main
//     cout << n << endl;

//     // 3. next
//     return Natural(n - 1);
// }

// ---------- Backtracking
// void Natural(int n)
// {
//     cout << "function caling for " << n << endl;
//     if (n == 0)
//     {
//         return;
//     }
//     Natural(n - 1);
//     cout << n << endl; //Backtracking
// }

// int main()
// {
//     Natural(10);
// }

// ---------
// void Natural(int n)
// {
//     cout << "function caling for " << n << endl;
//     if (n == 1) // optimizing last rcursive call
//     {
//         cout << n << endl;
//         return;
//     }

//     Natural(n - 1);
//     cout << n << endl;
// }

// -----------------------------------------------------------
// -----------------------------------------------------------

//
// void natural(char n)
// {
//     if (n == 'a')
//     {
//         cout << 'a' << endl;
//         return;
//     }

//     natural(n - 1);
//     cout << n << endl;
// }

// -- natural number sum

// int sum(int n)
// {
//     if (n == 1)
//     {
//         return n;
//     }
//     return n + sum(n - 1);
// }

// ------------------------------

// ---------------------------------------
// nth prime no.s using recursion. -- using acounter variable

// ------------------------------

int main()
{
}
