// 1009. Complement of Base 10 Integer
// Link -> https://leetcode.com/problems/complement-of-base-10-integer/submissions/1582222622/

#include <iostream>
#include <climits>
using namespace std;

int compliment(int x)
{
    int rem, ans = 0, mul = 1;
    if (x == 0)
    {
        return 1;
    }
    while (x > 0)
    {
        rem = x % 2;
        rem = rem ^ 1; // opposite XOR
        ans = ans + rem * mul;
        mul *= 2;
        x /= 2;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << compliment(num);
    return 0;
}
