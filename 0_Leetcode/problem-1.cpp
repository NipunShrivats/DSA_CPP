// 258. Add Digits
// Link -> https://leetcode.com/problems/add-digits/description/

#include <iostream>
using namespace std;

int addDigits(int num)
{
    while (num > 9)
    {
        int ans = 0, rem;
        while (num > 0)
        {
            rem = num % 10;
            ans += rem;
            num /= 10;
        }
        num = ans;
    }
    return num;
}
int main()
{
    cout << addDigits(88) << endl;
    cout << addDigits(0) << endl;
    return 0;
}