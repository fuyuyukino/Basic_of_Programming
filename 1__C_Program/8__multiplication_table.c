#include <stdio.h>

int main() {
    // Declare variable and input number
    int number, result, sum;
    printf("Enter a integer: "); scanf("%d", &number);
    
    //Multiplication table
    sum = 0;
    for (int i = 1; i <= 10; i++) {
        result = number * i;
        printf("%d x %d = %d\n", number, i, result);
        sum += result;
    }
    printf("Summary of the table is: %d", sum);
    return 0;
}