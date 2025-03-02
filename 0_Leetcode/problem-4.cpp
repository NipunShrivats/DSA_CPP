// 231. Power of 2
// Link -> https://leetcode.com/problems/power-of-two/description/

#include <iostream>
#include <climits>
using namespace std;

bool isTwo(int n)
{

    if (n < 1)
    {
        return false;
    }

    while (n != 1)
    {
        if (n % 2 == 1)
        {
            return false;
        }
        n /= 2;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a nunmber: ";
    cin >> n;
    cout << isTwo(n) << endl;
    cout << 1 % 2;
    return 0;
}