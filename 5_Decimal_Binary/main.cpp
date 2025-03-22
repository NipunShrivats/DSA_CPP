#include <iostream>
using namespace std;
int main()
{

    // 1. decimal to binary (10 --> 2)
    int num;
    cout << "Enter number: ";
    cin >> num;

    int rem, ans = 0, mul = 1;
    while (num > 0)
    {
        rem = num % 2;
        ans = rem * mul + ans;
        num /= 2;
        mul *= 10;
    }
    cout << ans;

    // -----------------------------

    // 2. binary to decimal (2 --> 10)
    // int num;
    // cout << "Enter number: ";
    // cin >> num;

    // int rem, ans = 0, mul = 1;
    // while (num > 0)
    // {
    //     rem = num % 10;
    //     ans = rem * mul + ans;
    //     num /= 10;
    //     mul *= 2;
    // }
    // cout << ans;

    // -----------------------------

    // 3. decimal to octal (10 --> 8)
    // int num;
    // cout << "Enter number: ";
    // cin >> num;

    // int rem, ans = 0, mul = 1;
    // while (num > 0)
    // {
    //     rem = num % 8;
    //     ans = rem * mul + ans;
    //     num /= 8;
    //     mul *= 10;
    // }
    // cout << ans;

    // -----------------------------

    return 0;
}