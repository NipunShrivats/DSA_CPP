#include <iostream>
using namespace std;

// 1. Only print //

int main()
{
    int i = 3, j = 4;
    int arr[i][j] = {{1, 2, 3, 0},
                     {4, 5, 6, 0},
                     {7, 8, 9, 0}};

    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            cout << arr[a][b] << " ";
        }
        cout << endl;
    }
    cout << "Row size: " << sizeof(arr) / sizeof(arr[i]) << endl;
    cout << "Column size: " << sizeof(arr[i]) / sizeof(arr[j]);
    return 0;
}

// --------------------------------------
// 2. input and print

// int main()
// {

//     int r, c;
//     cout << "Enter no. of rows: ";
//     cin >> r;
//     cout << "\nEnter no. of cols: ";
//     cin >> c;

//     int arr[r][c];

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout << "Enter values : " << endl;
//             cin >> arr[i][j];
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << sizeof(arr) / sizeof(arr[r]);
// }