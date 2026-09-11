#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    int choose_number, rand_number;
    int play = 10;
    int won = 0;

    rand_number = (rand() % 100) + 1;

    //PLay the game
    for (int i = 1; i <= play; i++) {
        cout << "[Turn " << i << " / " << play << " ] Choose random number from 0 - 100: ";
        cin >> choose_number;

        if (choose_number > rand_number) {
            cout << "The number is smaller than this!" << endl;
        } else if (choose_number < rand_number) {
            cout << "The number is bigger than this!" << endl;
        } else {
            cout << "You win! The number is " << rand_number << endl;
            won = 1;
            break;
        }
    }

    if (!won) {
        cout << "You lose! The number is " << rand_number << endl;
    }
    
    return 0;
}