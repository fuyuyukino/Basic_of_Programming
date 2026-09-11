#include <stdio.h>

int main() {
    // Declare variable and input data
    int age;
    printf("How old are you? "); scanf("%d", &age);

    // Choose discount depend on age
    if (age >= 18 && age <= 60) {
        printf("Your'e not applicable for discount!\n");
    } else if (age > 60) {
        printf("You have 20%% discount\n");
    } else {
        printf("You have 40%% discount!\n");
    }

    return 0;
}