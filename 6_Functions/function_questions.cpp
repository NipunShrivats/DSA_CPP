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

// 10. power nth

// double power(int num, int power)
// {
//     long double pro = 1;
//     for (int i = 1; i <= power; i++)
//     {
//         pro *= num;
//     }
//     return pro;
// }

// ----------------------------

// 11. all natural no.s in reverse - n to 1

// double revserse(int num)
// {
//     for (int i = num; i >= 1; i--)
//     {
//         cout << i << endl;
//     }
// }

// ----------------------------

// 12. all alphabets (a-z)

// char alphabets()
// {
//     char ch;
//     for (char i = 97; i <= 122; i++)
//     {
//         cout << i << endl;
//     }
// }
// ----------------------------

// 13. all even no.s (1-100)

// int even()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 == 0)
//         {
//             cout << i << endl;
//         }
//         else
//         {
//             continue;
//         }
//     }
// }

// ----------------------------

// 14. all odd no.s (1-100)

// int odd()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 != 0)
//         {
//             cout << i << endl;
//         }
//         else
//         {
//             continue;
//         }
//     }
// }

// ----------------------------

// 15. sum of all natural nos. (1 to n)

// int naturalSum(int num)
// {
//     int sum = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

// ----------------------------

// 16. sum of all even nos. (1 to n)

// int evenSum(int num)
// {
//     int sum = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     return sum;
// }

// ----------------------------

// 17. sum of all odd nos. (1 to n)

// int oddSum(int num)
// {
//     int sum = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         if (i % 2 != 0)
//         {
//             sum += i;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     return sum;
// }

// ----------------------------

// 18. multiplication table of any no.

// int table(int num)
// {
//     int pro;
//     for (int i = 1; i <= 10; i++)
//     {
//         pro = num * i;
//         cout << num << " x " << i << ": " << pro << endl;
//     }
// }

// ----------------------------

// 19. find no of digits in a number

// int digits(int num)
// {
//     int rem, count = 0;
//     while (num > 0)
//     {
//         rem = num % 10;
//         count++;
//         num /= 10;
//     }
//     return count;
// }

// ----------------------------

// // 20. find 1st and last digit for a number
// int firstLast(int num)
// {
//     int num1 = num, rem, first;
//     while (num1 > 0)
//     {
//         rem = num1 % 10;
//         num1 /= 10;
//     }
//     cout << "first: " << rem << endl;

//     int num2 = num;
//     while (num2 > 0)
//     {
//         rem = num2 % 10;
//         num2 /= 10;
//         cout << "Last: " << rem;
//         if (rem < 10)
//         {
//             break;
//         }
//     }
// }

// ----------------------------

// 21. sum of 1st and last digit fo a number

// int firstLastSum(int num)
// {
//     int num1 = num, rem1;
//     while (num1 > 0)
//     {
//         rem1 = num1 % 10;
//         num1 /= 10;
//     }

//     int num2 = num, rem2;
//     while (num2 > 0)
//     {
//         rem2 = num2 % 10;
//         num2 /= 10;
//         if (rem2 < 10)
//         {
//             break;
//         }
//     }
//     cout << "Sum:" << rem1 + rem2;
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
    // -------------------------
    //// 10.
    // int num, pow;
    // cout << "Enter a number: ";
    // cin >> num;
    // cout << "Enter a power: ";
    // cin >> pow;
    // cout << fixed << power(num, pow);
    // -------------------------
    //// 11.
    // int num;
    // cout << "Enter number: ";
    // cin >> num;
    // revserse(num);
    // -------------------------
    //// 12.
    // alphabets();
    // -------------------------
    //// 13.
    // even();
    // -------------------------
    //// 14.
    // odd();
    // -------------------------
    //// 15.
    // cout << naturalSum(10);
    // -------------------------
    //// 16.
    // cout << evenSum(10);
    // -------------------------
    //// 17.
    // cout << oddSum(10);
    // -------------------------
    //// 18.
    // table(2);
    // -------------------------
    // //// 19.
    // cout << digits(99) << " digits"
    // -------------------------
    // //// 20.
    // firstLast(987);
    // -------------------------
    // //// 21.
    // firstLastSum(11101);
    // -------------------------
    return 0;
}