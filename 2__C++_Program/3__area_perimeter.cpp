#include <iostream>

using namespace std;

int main() {
    // Declare variables and input length, width
    float length, width;
    cout << "Enter length of a rectangle: "; cin >> length; 
    cout << "Enter width of a rectangle: "; cin >> width;

    // Calculate the area and perimeter
    cout << "Area of a rectangle is: " << length * width << endl;
    cout << "Perimeter of a rectangle is: " << 2*(length + width) << endl;
    return 0;
}