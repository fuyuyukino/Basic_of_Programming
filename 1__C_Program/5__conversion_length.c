#include <stdio.h>

int main() {
    // Declare variables and input cm
    int cm, m, leftover_cm;
    printf("Enter length in centimeter: "); scanf("%d", &cm);
    
    // Calculate cm to m
    m = cm / 100;
    leftover_cm = cm % 100;
    printf("Cm to m: %dm and %dcm\n", m, leftover_cm);
    return 0;
}