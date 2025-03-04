// 69. Sqrt(x)
// Link -> https://leetcode.com/problems/sqrtx/description/

#include <iostream>
#include <climits>
using namespace std;

int sqRoot(int x)
{
    int num = 0;
    if (num > INT_MAX || num < INT_MIN)
    {
        return 0;
    }
    else
    {
        while (num * num <= x)
        {
            num++;
        }
        return num - 1;
    }
}

int main()
{

    int x;
    cout << "Enter the number: ";
    cin >> x;

    cout << sqRoot(x);
    return 0;
}
