#include <iostream>
#define PI 3.14159

using namespace std;

int main () {
    // Declare variables and input diameter
    float diameter, circumference;
    cout << "Enter diameter of a circle: "; cin >> diameter;

    // Calculate the circumference
    circumference = PI * diameter;
    cout << "The circumference of a circle is: " << circumference << endl;
    return 0;
}