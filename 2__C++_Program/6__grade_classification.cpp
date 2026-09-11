#include <iostream>

using namespace std;

int main() {
    // Input grade and calculate with if statements
    int grade;
    char cls;

    cout << "Enter a grade: "; cin >> grade;

    if (grade >= 90 && grade <= 100) {
        cls = 'A';
    } else if (grade >= 80) {
        cls = 'B';
    } else if (grade >= 70) {
        cls = 'C';
    } else if (grade >= 60) {
        cls = 'D';
    } else {
        cls = 'F';
    }

    cout << "The classification is: " << cls << endl;

    return 0;
}