#include <stdio.h>

int main() {
    // Input grade and calculate with if statements
    int grade;
    char* class;

    printf("Enter a grade: "); scanf("%d", &grade);

    if (grade >= 90 && grade <= 100) {
        class = 'A';
    } else if (grade >= 80) {
        class = 'B';
    } else if (grade >= 70) {
        class = 'C';
    } else if (grade >= 60) {
        class = 'D';
    } else {
        class = 'F';
    }

    printf("The classification is: %s", class);

    return 0;
}