#include <stdio.h>
#define PI 3.14159

int main () {
    // Declare variables and input diameter
    float diameter, circumference;
    printf("Enter diameter of a circle: "); scanf("%f", &diameter);

    // Calculate the circumference
    circumference = PI * diameter;
    printf("The circumference of a circle is: %.2f\n", circumference);
    return 0;
}