#include <iostream>
using namespace std;

// 1. find max no among 2
// int MaxNo(int a, int b)
// {
//     if (a > b)
//     {
//         cout << a;
//     }
//     else
//     {
//         cout << b;
//     }
// }
// ----------------------------

// 2. calc sum of n nos.

// int findSum(int num)
// {
//     int sum = 0;
//     for (int i = 0; i <= num; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

// ----------------------------

// 3. calc n factorial.
// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     cout << fact;
// }
// ----------------------------

// // 4. calc no. of digits of a number.
// int totalDigits(int num)
// {
//     int rem = 0, div = 0, counter = 0;
//     while (num > 0)
//     {
//         rem = num % 10;
//         counter++;
//         num /= 10;
//     }
//     cout << counter;
// }

// ----------------------------

// 5. calc sum. of digits of a number.
// int theSum(int num)
// {
//     int rem = 0, div = 0, sum = 0;
//     while (num > 0)
//     {
//         rem = num % 10;
//         sum += rem;
//         num /= 10;
//     }
//     cout << sum;
// }

// ----------------------------

// 6. calc nCr binomial coefficient for n & r

//// nCr = (n!)/(r!(n-r)!)

// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }

// int binomial(int n, int r)
// {
//     cout << factorial(n) / (factorial(r) * factorial(n - r));
// }
// ----------------------------

// 7. check if a no. is prime or not

// int checkPrime(int num)
// {
//     int counter = 0;
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             counter = 1;
//             break;
//         }
//         else
//         {
//             counter = 0;
//         }
//     }
//     if (counter == 0)
//     {
//         cout << num << " is prime.";
//     }
//     else
//     {
//         cout << num << " is not prime.";
//     }
// }

// ----------------------------

// 8. print all prime no. from 2 to N

// int printPrime(int n)
// {
//     cout << 2 << endl;
//     for (int i = 2; i < n; i++)
//     {
//         int isPrime = 0;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 isPrime = 0;
//                 break;
//             }
//             else
//             {
//                 isPrime = 1;
//             }
//         }
//         if (isPrime == 1)
//         {
//             cout << i << endl;
//         }
//     }
// }

// ----------------------------

// 9. print nth Fibonacci.

// int febonacci(int num)
// {
//     int a = 0;
//     int b = 1;
//     int c;
//     cout << a << endl
//          << b << endl;
//     for (int i = 0; i < num - 2; i++)
//     {
//         c = a + b;
//         cout << c << endl;
//         a = b;
//         b = c;
//     }
// }

// ----------------------------

int main()
{
    // 1.
    // MaxNo(2, 4);
    // -------------------------
    // 2.
    // cout << "sum: " << findSum(5);
    // -------------------------
    // 3.
    // factorial(5);
    // -------------------------
    // 4.
    // totalDigits(2399768);
    // -------------------------
    // 5.
    // theSum(31243);
    // -------------------------
    // 6.
    // binomial(8, 2);
    // binomial(6, 3);
    // -------------------------
    // 7.
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // checkPrime(num);
    // -------------------------
    // 8.
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // printPrime(num);
    // -------------------------
    //// 9.
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // febonacci(num);

    return 0;
}