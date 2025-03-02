// 3126. Power of 3
// Link -> https://leetcode.com/problems/power-of-three/description/

#include <iostream>
#include <climits>
using namespace std;

bool isThree(int n)
{
    while (n >= 3)
    {
        if (n % 3 != 0)
        {
            return false;
        }
        n /= 3;
    }
    return n == 1; // no value less than 3 is allowed except 1
}

int main()
{
    int n;
    cout << "Enter a nunmber: ";
    cin >> n;
    cout << isThree(n) << endl;
    return 0;
}