#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declare variables and input data
    srand(time(NULL));

    int choose_number, rand_number;
    int play = 10;
    int won = 0;

    rand_number = (rand() % 100) + 1;

    // PLay the game
    for (int i = 1; i <= play; i++) {
        printf("[Turn %d/%d] Choose random number from 0 - 100: ", i, play);
        scanf("%d", &choose_number);

        if (choose_number > rand_number) {
            printf("The number is smaller than this!\n");
        } else if (choose_number < rand_number) {
            printf("The number is bigger than this!\n");
        } else {
            printf("You win! The number is %d\n", rand_number);
            won = 1;
            break;
        }
    }

    if (!won) {
        printf("You lose! The number is %d\n", rand_number);
    }
    
    return 0;
}