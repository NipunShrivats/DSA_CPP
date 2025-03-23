// 342. Power of Four
// Link -> https://leetcode.com/problems/power-of-four/description/

#include <iostream>
#include <climits>
using namespace std;

#include <iostream>
#include <climits>
using namespace std;

bool isThree(int n)
{
    while (n >= 4)
    {
        if (n % 4 != 0)
        {
            return false;
        }
        n /= 4;
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