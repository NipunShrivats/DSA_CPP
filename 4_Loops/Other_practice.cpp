
// ------------- WHILE LOOP -------------

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    // ----------------------------------------

    // 1. calc sum of all values of array

    // int arr[] = {10, 20, 30, 40, 50};

    // int i = 0;
    // int sum = 0;
    // while (i < sizeof(arr) / sizeof(arr[0]))
    // {
    //     sum += arr[i];
    //     i++;
    // }
    // cout << sum;

    // ----------------------------------------

    // 2. reverse a number 123->321

    // int num = 123;
    // int rem = 0;
    // int revNum = 0;
    // while (num > 0)
    // {
    //     rem = num % 10;
    //     revNum = revNum * 10 + rem;
    //     num /= 10;
    // }
    // cout << revNum;
    // ----------------------------------------

    // 3. Check for pallindrome number

    // int num = 12321, temp = num;
    // int rem = 0;
    // int revNum = 0;
    // while (num > 0)
    // {
    //     rem = num % 10;
    //     revNum = revNum * 10 + rem;
    //     num /= 10;
    // }

    // if (temp == revNum)
    // {
    //     cout << "Pallindrome Number";
    // }
    // else
    // {
    //     cout << "Not a pallindrome";
    // }
    // ------------------------------------------------

    // 4. Check for armstrong Number. //
    // eg- 153 --> 1^3 + 5^3 + 3^3 = 153.(n=3)
    // 1634 --> 1^4 + 6^4 + 3^4 + 4^4;

    // int num, rem = 0, cube = 0, sum = 0;
    // cout << "Enter number: ";
    // cin >> num;
    // int temp = num;
    // while (num > 0)
    // {
    //     rem = num % 10;
    //     cube = rem * rem * rem;
    //     // cube = cbrt(rem);
    //     sum += cube;
    //     num /= 10;
    // }

    // if (temp == sum)
    // {
    //     cout << "The numer is Pallindrome";
    // }
    // else
    // {
    //     cout << "The numer is not Pallindrome";
    // }

    // ------------------------------------------------

    // 5. factorial

    // int num, fact = 1, i = 1;
    // cout << "Enter a number: ";
    // cin >> num;

    // while (i <= num)
    // {
    //     fact *= i;
    //     i++;
    // }
    // cout << fact;

    // ------------------------------------------------

    return 0;
}