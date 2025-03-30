
// #include <iostream>
// using namespace std;

// int main()
// {

//     string fullName, address;
//     int roll, id;
//     cout << "full name: ";
//     getline(cin, fullName);

//     cout << "Roll No: ";
//     cin >> roll;

//     cout << "Id: ";
//     cin >> id;

//     cout << "Address: ";
//     cin.ignore();
//     getline(cin, address);

//     cout << "Name: " << fullName << endl;
//     cout << "Roll No: " << roll << endl;
//     cout << "Id: " << id << endl;
//     cout << "Address: " << address;

//     return 0;
// }

// cout << "Enter the string:";
// gets(str);

// find length
#include <iostream>
using namespace std;

int main()
{
    // char str[] = "Hello";
    string str = "hello";
    int i, length = 0;

    for (i = 0; str[i] != '\0'; ++i)
    {
        length++;
    }

    cout << "Length of the string is:" << length << endl;

    return 0;
}