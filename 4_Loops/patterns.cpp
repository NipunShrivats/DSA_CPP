#include <iostream>
using namespace std;
int main()
{
    // 1. n number

    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    // int n;
    // cout << "Enter number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // ------------------------------------------

    // 2. n number of *

    // * * * *
    // * * * *
    // * * * *
    // * * * *

    // int n;
    // cout << "Enter number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // ------------------------------------------

    // 3. n number of alphabets

    // A B C D
    // A B C D
    // A B C D
    // A B C D

    // int n;
    // cout << "Enter number: ";
    // cin >> n;
    // for (char i = 0; i < n; i++)
    // {
    //     char ch = 65;
    //     for (int j = 1; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch += 1;
    //     }
    //     cout << endl;
    // }

    // ------------------------------------------

    // 4. number in order

    // 1 2 3
    // 4 5 6
    // 7 8 9

    // int n;
    // cout << "Enter no. of rows: ";
    // cin >> n;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // ------------------------------------------

    // 5. charactes in order

    // ABCD
    // EFGH
    // IJKL
    // MLOP
    // int n;

    // cout << "Enter no. of rows: ";
    // cin >> n;
    // char ch = 65;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // ------------------------------------------

    // 6
    // *
    // * *
    // * * *
    // * * * *
    // int n;
    // cout << "Enter no. of rows: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // ------------------------------------------

    // 7.

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4

    // int n, num = 1;
    // cout << "Enter no. of rows: ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num << " ";
    //     }
    //     num++;
    //     cout << endl;
    // }

    // ------------------------------------------

    // 8.

    // A
    // B B
    // C C C
    // D D D D

    // int n;
    // cout << "Enter no. of rows: ";
    // cin >> n;
    // char ch = 65;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ch << " ";
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // ------------------------------------------

    // 9.

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // int n;
    // cout << "Enter no. of rows: ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // ------------------------------------------

    // 10.

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // int n;
    // cout << "Enter no. of rows: ";
    // cin >> n;
    // int num = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // ------------------------------------------

    // 11.

    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4

    // int num;
    // cout << "Enter the number: ";
    // cin >> num;
    // int count = 1;

    // for (int i = 0; i < num; i++)
    // {

    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = num; j > i; j--)
    //     {
    //         cout << count;
    //     }
    //     count++;
    //     cout << endl;
    // }

    // ------------------------------------------

    // 12.

    // 1 1 1 1 1
    //  2 2 2 2
    //   3 3 3
    //    4 4
    //     5

    // int num;
    // cout << "Enter the number: ";
    // cin >> num;
    // int count = 1;

    // for (int i = 0; i < num; i++)
    // {

    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = num; j > i; j--)
    //     {
    //         cout << count << " ";
    //     }
    //     count++;
    //     cout << endl;
    // }

    // ------------------------------------------

    // 13.

    // 5 5 5 5 5
    //  4 4 4 4
    //   3 3 3
    //    2 2
    //     1

    // int num;
    // cout << "Enter the number: ";
    // cin >> num;
    // int count = num;

    // for (int i = 0; i < num; i++)
    // {

    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int k = num; k > i; k--)
    //     {
    //         cout << count << " ";
    //     }
    //     count--;
    //     cout << endl;
    // }

    // ------------------------------------------
    // 14.
    //     1
    //    2 2
    //   3 3 3
    //  4 4 4 4
    // 5 5 5 5 5

    // int num;
    // cout << "Enter the number: ";
    // cin >> num;
    // int count = num;

    // for (int i = 1; i <= num; i++)
    // {

    //     for (int j = 1; j <= count; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << i << " ";
    //     }
    //     count--;

    //     cout << endl;
    // }

    // ------------------------------------------

    // 15

    //       1
    //     2 2 2
    //   3 3 3 3 3
    // 4 4 4 4 4 4 4

    // int n;
    // cout << "Enter number: ";
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     // // space
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }

    //     // // no. order 1
    //     for (int k = 1; k <= i + 1; k++)
    //     {
    //         cout << i + 1;
    //     }

    //     // // no. order 2
    //     for (int l = 1; l <= i; l++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }
    // ------------------------------------------

    // 16.

    //       1
    //     1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1

    // int n;
    // cout << "Enter number: ";
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     // spaces
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << "*";
    //     }

    //     // no. set-1
    //     for (int k = 1; k <= i + 1; k++)
    //     {
    //         cout << k;
    //     }

    //     // no. set-2
    //     for (int l = i; l >= 1; l--)
    //     {
    //         cout << l;
    //     }
    //     cout << endl;
    // }

    // ------------------------------------------

    // 17. Hollow diamond pattern
    // n=4

    //      *
    //     * *
    //    *   *
    //   *     *
    //    *   *
    //     * *
    //      *

    // int n;
    // cout << "Enter number: ";
    // cin >> n;

    // // upper part
    // for (int i = 0; i < n; i++)
    // {
    //     // spaces-1
    //     for (int j = 0; j < (n - i - 1); j++)
    //     {
    //         cout << " ";
    //     }
    //     // star-1
    //     cout << "*";

    //     // spaces-2
    //     if (i != 0)
    //     {
    //         for (int l = 0; l < (2 * i - 1); l++)
    //         {
    //             cout << " ";
    //         }
    //         // star-2
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // // lower part
    // for (int i = 0; i < n - 1; i++)
    // {
    //     // space-1
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << " ";
    //     }
    //     // pattern-1
    //     cout << "*";
    //     // space-2 Odd // [2 * (n - 2 - i) - 1] -> [2*(n-i)-5]
    //     if (i != n - 2)
    //     {
    //         for (int k = 0; k < (2 * (n - i) - 5); k++)
    //         {
    //             cout << " ";
    //         }
    //         // patern-2
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // ------------------------------------------

    // 18. Hollow triangle 1

    //      *
    //     * *
    //    *   *
    //   * * * *

    // int n;
    // cout << "Enter number: ";
    // cin >> n;

    // for (int i = 0; i < n - 1; i++)
    // {
    //     // space-1
    //     for (int j = i; j < n - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     // space-2
    //     if (i != 0)
    //     {
    //         for (int k = 0; k < ((2 * i) - 1); k++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // // last line
    // for (int l = 0; l < n; l++)
    // {
    //     cout << "* ";
    // }

    // ------------------------------------------

    // 19. Hollow triangle 2

    //   * * * *
    //    *   *
    //     * *
    //      *

    // int n;
    // cout << "Enter number: ";
    // cin >> n;

    // // part-1 //
    // for (int l = 0; l < n; l++)
    // {
    //     cout << "* ";
    // }
    // cout << endl;

    // // Part-2 //
    // for (int i = 0; i < n - 1; i++)
    // {

    //     // space-1
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     // space-2
    //     if (i != n - 2)
    //     {

    //         for (int j = 0; j < (2 * (n - 2 - i) - 1); j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //         cout << endl;
    //     }
    // }

    // ------------------------------------------

    // 20  Butter fly pattern

    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *

    // int n;
    // cout << "Enter number: ";
    // cin >> n;

    // // upper portion
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int k = 0; k < (n - i - 1); k++)
    //     {
    //         cout << " ";
    //     }

    //     // cout << " ";

    //     for (int k = 0; k < (n - i - 1); k++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // lower portion

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int k = 0; k < i; k++)
    //     {
    //         cout << " ";
    //     }

    //     // cout << " ";

    //     for (int k = 0; k < i; k++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // ------------------------------------------

    // 21. Hollow triangle-1

    // *
    // * *
    // *  *
    // *   *
    // * * * *

    // int n = 5;
    // // cout << "Enter number: ";
    // // cin >> n;

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     if (i != 0)
    //     {

    //         for (int k = 0; k < i; k++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     cout << "* ";
    // }
    // ------------------------------------------

    // 22. Hollow triangle-2

    //      *
    //    * *
    //   *  *
    //  *   *
    // ******

    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     if (i != n - 1)
    //     {
    //         // space-1
    //         for (int j = 0; j < (n - i - 1); j++)
    //         {
    //             cout << " ";
    //         }
    //         // pattern-1
    //         if (i != 0)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }

    //         // space-2
    //         for (int k = 0; k < i; k++)
    //         {
    //             cout << " ";
    //         }
    //         // pattern-2
    //         cout << "*";

    //         cout << endl;
    //     }
    // }

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << "*";
    // }

    // ------------------------------------------

    // 23. hour glass

    // *******
    //  *   *
    //   * *
    //    *
    //   * *
    //  *   *
    // *******

    // int n = 5;

    // // top part//

    // // part-1
    // for (int i = 0; i <= n + 1; i++)
    // {
    //     cout << "*";
    // }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (i != 0)
    //     {
    //         // part-2 space
    //         for (int j = 0; j < i; j++)
    //         {
    //             cout << " ";
    //         }
    //         // part-3 pattern
    //         cout << "*";
    //     }

    //     // // part-4 space
    //     if (i != 0 && i != n - 2)
    //     {
    //         for (int j = 0; j < 2 * (n - i) - 5; j++)
    //         {
    //             cout << " ";
    //         }
    //         // part-5 pattern
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // // // Bottom Part //
    // for (int i = 0; i < n - 3; i++)
    // {
    //     //
    //     for (int j = 0; j < n - 3 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     //
    //     for (int j = 0; j <= (2 * i); j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     cout << endl;
    // }
    // for (int i = 0; i <= n + 1; i++)
    // {
    //     cout << "*";
    // }

    // ------------------------------------------

    // 24. Rhombus-1

    //  * * * * *
    //   * * * * *
    //    * * * * *
    //     * * * * *
    //      * * * * *

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < n; k++)
    //     {
    //         cout << " *";
    //     }
    //     cout << endl;
    // }

    // ------------------------------------------

    // 25. Rhombus-2

    //       * * * * *
    //      * * * * *
    //     * * * * *
    //    * * * * *
    //   * * * * *

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < n; k++)
    //     {
    //         cout << " *";
    //     }
    //     cout << endl;
    // }

    // ------------------------------------------

    // 26. full Diamond

    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     if (i != 0)
    //     {
    //         for (int k = 0; k < n - i; k++)
    //         {
    //             cout << "*" << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    return 0;
}