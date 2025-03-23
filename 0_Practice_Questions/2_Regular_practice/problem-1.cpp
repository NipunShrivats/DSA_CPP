// 1. Convert capital to small small to capital
// a->A, A->a

#include <iostream>
using namespace std;

char convert(char ch)
{
    if (ch >= 97 && ch <= 122)
    {
        return ch - 32;
    }
    else if (ch >= 65 && ch <= 90)
    {
        return ch + 32;
    }
}

int main()
{
    cout << convert('A');
    cout << convert('a');
    return 0;
}