#include <iostream>

using namespace std;

// Main Calculation
int main() {
    // Declare variables and input a,b, symbol
    float a, b, c;
    char symbol;

    cout << "Input first number: "; cin >> a;
    cout << "Input second number: "; cin >> b;
    cout << "Enter +, -, *, or /: "; cin >> symbol;

    // Using if statement with function inside
    if (symbol == '+') {
        cout << "The addition of " << a << " and " << b << " is " << a + b << endl;
    } else if (symbol == '-') {
        cout << "The subtraction of " << a << " and " << b << " is " << a - b << endl;
    } else if (symbol == '*') {
        cout << "The multiplication of " << a << " and " << b << " is " << a * b << endl;
    } else if (symbol == '/') {
        if (b == 0) {
            cout << "Cannot be divided by 0" << endl;
        } else {
            cout << "The division of " << a << " and " << b << " is " << a / b << endl;
        }
    } else {
        cout << "Symbol is undefined" << endl;
    }

    return 0;
}