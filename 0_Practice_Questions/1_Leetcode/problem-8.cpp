// 9. Palindrome Number
// Link -> https://leetcode.com/problems/palindrome-number/submissions/1582081471/

#include <iostream>
#include <climits>
using namespace std;

//// type2 - limits

bool isPalindrome(int x)
{

    int rem = 0, reverse = 0, num_copy = x;

    if (x < 0)
    {
        return false;
    }
    while (x > 0)
    {
        rem = x % 10;
        if (reverse > INT_MAX / 10)
        {
            return false;
        }
        reverse = reverse * 10 + rem;
        x /= 10;
    }

    if (num_copy == reverse)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//// type2 - limits

// bool isPalindrome(int x)
// {

//     long long rem = 0, reverse = 0, num_copy = x;

//     if (x < 0)
//     {
//         return false;
//     }
//     while (x > 0)
//     {
//         rem = x % 10;
//         reverse = reverse * 10 + rem;
//         x /= 10;
//     }

//     if (num_copy == reverse)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << isPalindrome(num);
    return 0;
}
