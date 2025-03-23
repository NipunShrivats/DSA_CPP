// 1. Convert capital to small small to capital
// a->A, A->a

#include <iostream>
using namespace std;

int countDigit(int num)
// will return no of digits in a number
{
    int num_copy = num, rem, count = 0;
    while (num > 0)
    {
        rem = num % 10;
        count++;
        num /= 10;
    }
    return count;
}

int multiplyPower(int num, int times)
{
    int ans = 1;
    for (int i = 0; i < times; i++)
    {
        ans *= num;
    }
    return ans;
}

bool armstrog(int num)
{

    int num_copy = num, rem, ans = 0;
    while (num > 0)
    {
        rem = num % 10;
        ans = multiplyPower(rem, countDigit(num_copy)) + ans;
        num /= 10;
    }
    // return ans;

    if (num_copy == ans)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << armstrog(153) << endl;  // yes
    cout << armstrog(15) << endl;   // No
    cout << armstrog(8208) << endl; // yes

    // cout << countDigit(153) << endl;
    // cout << multiplyPower(1, countDigit(153))<<endl;

    return 0;
}