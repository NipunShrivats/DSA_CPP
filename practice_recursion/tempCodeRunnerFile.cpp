// recursion - when a function calls itself\

#include <iostream>
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
void Natural(int n)
{
    cout << "function caling for " << n << endl;
    if (n == 0)
    {
        return;
    }
    Natural(n - 1);
    cout << n << endl;
}

int main()
{
    Natural(10);
}