
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
    // 1634 --> 1^4 + 6^4 + 3^4 + 4^4; (n=4)

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
    //     cout << "The numer is Armstrong";
    // }
    // else
    // {
    //     cout << "The numer is not Armstrong";
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

    // Ques
    // 6. WAP swap 2 nos.

    // int a, b, temp;
    // cout << "Enter 1st no: ";
    // cin >> a;
    // cout << "Enter 2nd no: ";
    // cin >> b;

    // cout << "value of a & b " << a << " & " << b << endl;

    // temp = a;
    // a = b;
    // b = temp;

    // cout << "value of a & b " << a << " & " << b;

    // -----------------------------------------------
    // -----------------------------------------------

    // 7. WAP sort values of array [without using array.sort for  JS] - assending and descending

    int arr[] = {10, 80, 47, 33, 2, 43, 44, 255};
    int size = (sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            // if (arr[j] > arr[j + 1]) // Ascending
            if (arr[j] < arr[j + 1]) // Descending
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// ------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
