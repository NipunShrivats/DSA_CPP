#include <iostream>
using namespace std;

// 1. find max no among 2
// int MaxNo(int a, int b)
// {
//     if (a > b)
//     {
//         cout << a;
//     }
//     else
//     {
//         cout << b;
//     }
// }
// ----------------------------

// 2. calc sum of n nos.

int findSum(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

// ----------------------------
int main()
{
    // 1.
    // MaxNo(2, 4);

    // -------------------------

    // 2.
    cout << "sum: " << findSum(5);
    // -------------------------
    return 0;
}