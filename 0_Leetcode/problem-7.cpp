// 69. Sqrt(x)
// Link -> https://leetcode.com/problems/sqrtx/description/

#include <iostream>
#include <climits>
using namespace std;

int sqRoot(int x)
{
    long num = 0;
    while (num * num <= x)
    {
        num++;
    }
    return num - 1;
}

int main()
{

    int x;
    cout << "Enter the number: ";
    cin >> x;

    cout << sqRoot(x);
    return 0;
}
