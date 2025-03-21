// 9.
// Link ->

#include <iostream>
#include <climits>
using namespace std;

//// type2 - limits

int compliment(int x)
{
    int rem, ans = 0, mul = 1;
    while (x > 0)
    {
        rem = x % 2;
        rem = rem ^ 1;
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
