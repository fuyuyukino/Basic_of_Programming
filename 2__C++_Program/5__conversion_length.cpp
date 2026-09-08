#include <iostream>

using namespace std;

int main() {
    // Declare variables and input cm
    int cm, m, leftover_cm;
    cout << "Enter length in centimeter: "; cin >> cm;
    
    // Calculate cm to m
    m = cm / 100;
    leftover_cm = cm % 100;
    cout << "Cm to m: " << m << "m" << " and " << leftover_cm << "cm" << endl;
    return 0;
}