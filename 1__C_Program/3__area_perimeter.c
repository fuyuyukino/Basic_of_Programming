#include <stdio.h>

int main() {
    // Declare variables and input length, width
    float length, width;
    printf("Enter length of a rectangle: "); scanf("%f", &length); 
    printf("Enter width of a rectangle: "); scanf("%f", &width);

    // Calculate the area and perimeter
    printf("Area of a rectangle is: %.2f\n", length * width);
    printf("Perimeter of a rectangle is: %.2f\n", 2*(length + width));
    return 0;
}