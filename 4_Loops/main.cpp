// loops

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // 1. while loop
    // int num = 1;
    // while (num <= 5)
    // {
    //     cout << "Nipun - " << num << endl;
    //     num++;
    // };

    // -------------------------------------------------
    // -------------------------------------------------

    // 2. For loop

    // int num, sum = 0, mul = 1;
    // cout << "Enter the limit:";
    // cin >> num;
    // for (int i = 1; i <= num; i++)
    // {
    //     sum += i;
    //     mul *= i;
    // }
    // cout << "Sum: " << sum << endl;
    // cout << "Mul: " << mul << endl;
    // return 0;

    // -------------------------------------------------
    // -------------------------------------------------

    // 2.1. For loop - all odd numbers

    // int num, sum = 0, mul = 1;
    // cout << "Enter the limit:";
    // cin >> num;
    // for (int i = 1; i <= num; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum += i;
    //         mul *= i;
    //         // cout << "val: " << i << endl;
    //     }
    // }
    // cout << "Sum: " << sum << endl;
    // cout << "Mul: " << mul << endl;

    // -------------------------------------------------
    // -------------------------------------------------
    // 3. do-while loop

    // int n = 120;
    // int i = 1;
    // do
    // {
    //     cout << i << " ";
    //     i++;
    // } while (i <= n);

    // -------------------------------------------------
    // -------------------------------------------------

    // int num;
    // bool isPrime = true;

    // cout << "Enter the number to check: ";
    // cin >> num;

    // for (int i = 2; i <= sqrt(num); i++)
    // {
    //     if (num % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime == false)
    // {
    //     cout << num << " is Composite.";
    // }
    // else
    // {
    //     cout << num << " is Prime.";
    // }

    // -------------------------------------------------
    // -------------------------------------------------

    // Nested Loop - Loop inside loop
    // int a = (2, 3, 4, 5);
    // cout << a;

    // int aa = (cout << "Sardar", 2, 8);
    // cout << aa;

    // -------------------------------------------------
    // -------------------------------------------------

    // int x = 5;
    // for (int i = 1; i <= x; i++)
    // {
    //     int m = 5;
    //     for (int j = 1; j <= m; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // -------------------------------------------------
    // -------------------------------------------------

    // Q1. 1->N divisible by 3
    // int n, sum = 0;
    // cout << "Enter a number n: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 3 == 0)
    //     {
    //         sum += i;
    //         cout << i;
    //     }
    // }
    // cout << "sum: " << sum;

    // Q2. factorial of no. N
    int N, fact = 1;
    cout << "Enter number N: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        fact *= i;
    }
    cout << "Factorial of number " << N << ": " << fact;

    return 0;
}
