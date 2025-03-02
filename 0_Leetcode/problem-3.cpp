// 7. reverse integer
// Link -> https://leetcode.com/problems/reverse-integer/description/

// Constraints : -2^31 <= x <= 2^31 - 1

#include <iostream>
#include <climits>

using namespace std;

int revInt(int num)
{
    int rem = 0, ans = 0;
    while (num != 0)
    {
        rem = num % 10;

        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            return 0;
        }
        ans = ans * 10 + rem;

        num /= 10;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter a number to reverse: ";
    cin >> num;
    cout << revInt(num);

    // cout << INT_MIN << endl;
    // cout << INT_MAX;

    return 0;
}