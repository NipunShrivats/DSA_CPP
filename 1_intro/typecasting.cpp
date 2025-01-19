#include <iostream>
using namespace std;
int main()
{

    // type converting [small->big]
    char grade = 'a';
    int value = grade;

    cout << value << endl;

    // type casting [big->small]
    double price = 100.99;
    int newPrice = int(price);

    cout << price << endl;
    cout << newPrice << endl;
    return 0;
}