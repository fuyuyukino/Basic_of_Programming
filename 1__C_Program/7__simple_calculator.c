#include <stdio.h>

// Main Calculation
int main() {
    // Declare variables and input a,b, symbol
    float a, b, c;
    char symbol;

    printf("Input first number: "); scanf("%f", &a);
    printf("Input second number: "); scanf("%f", &b);
    printf("Enter +, -, *, or /: "); scanf(" %c", &symbol);

    // Using if statement with function inside
    if (symbol == '+') {
        c = a + b;
        printf("The addition of %.2f and %.2f is %.2f\n", a, b, c);
    } else if (symbol == '-') {
        c = a - b;
        printf("The subtraction of %.2f and %.2f is %.2f\n", a, b, c);
    } else if (symbol == '*') {
        c = a * b;
        printf("The multiplication of %.2f and %.2f is %.2f\n", a, b, c);
    } else if (symbol == '/') {
        if (b != 0.0) {
            c = a / b;
            printf("The division of %.2f and %.2f is %.2f\n", a, b, c);
        } else {
            printf("Undefined");
        }
    } else {
        printf("Symbol is undefined!");
    }

    return 0;
}