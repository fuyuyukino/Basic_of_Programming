#include <iostream>

using namespace std;

int main() {
    // Declare variables and input data
    int number, result, sum;
    cout << "Enter a integer: "; cin >> number;

    // Multiplication Table
    sum = 0;
    for (int i = 1; i <= 10; i++) {
        result = number * i;
        cout << number << " x " << i << " = " << result << endl;
        sum += result;
    }

    cout << "Summary of the table is: " << sum << endl;

    return 0;
}