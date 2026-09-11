#include <iostream>

using namespace std;

int main() {
    // Declare variable and input data
    int age;
    cout << "How old are you? "; cin >> age;

    // Choose discount depend on age
    if (age > 60) {
        cout << "Discount up to 40%" << endl;
    } else if (age < 18) {
        cout << "Discount up to 20%" << endl;
    } else {
        cout << "You're not applicable for discount!" << endl;
    }

    return 0;
}