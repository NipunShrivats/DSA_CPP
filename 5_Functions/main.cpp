#include <iostream>
using namespace std;

// function definition
int printHello()
{
    cout << "hElLo gUyS !\n";
    return 69; // will only work with cout
}

// parameter
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    // Invoke/Call function
    // printHello();

    int val = printHello();
    cout << "val=" << val << endl;

    // argumets;
    cout << sum(2, 4);
    return 0;
}