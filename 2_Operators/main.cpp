#include <iostream>
using namespace std;
int main()
{

    // types of operators
    // 1. Arithmetic(+, -, *, /, %)
    int a = 5, b = 10;
    int sum = a + b, sub = a - b, mul = a * b, div = a / b, mod = a % b;

    cout << a << "+" << b << "= " << sum << endl;
    cout << a << "-" << b << "= " << sub << endl;
    cout << a << "*" << b << "= " << mul << endl;
    cout << a << "/" << b << "= " << div << endl;
    cout << a << "%" << b << "= " << mod << endl; // modulo

    float num1 = 5, num2 = 2;
    cout << "float division: " << num1 / num2 << endl;
    cout << "double division: " << (5 / double(2)) << endl;
    // -------------------------------
    // 2. Relational (<, >, <=, >=, ==,!=)
    cout << (3 > 5) << endl;
    cout << (3 < 5) << endl;
    cout << (3 <= 5) << endl;
    cout << (3 >= 5) << endl;
    cout << (3 == 5) << endl;
    cout << (3 != 5) << endl;

    // -------------------------------
    // 3. Logical (||, &&, !) logical OR, logical AND, logical NOT

    cout << !(3 > 1) << endl;

    cout << ((3 < 1) || (2 > 1)) << endl;
    cout << ((3 < 1) && (2 > 1)) << endl;
    cout << ((3 > 1) && (2 > 1)) << endl;

    // Binary operators - use 2 operands like a & b
    // Unary operators - use only 1 operands like use a++ or ++a istead of a=a+1

    int num001 = 10;
    // int num002 = num001++;
    int num002 = ++num001;
    cout << num002 << endl;
    cout << num001 << endl;

    // bitwise operators// later in binary

    return 0;
}