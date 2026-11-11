/*
 * Program 5.1: Area of a Triangle - No Arguments, No Return Value
 * Formula: Area = 1/2 x Base x Height
 */
#include <stdio.h>

void area()
{
    float base, height, result;

    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);

    result = 0.5 * base * height;
    printf("Area of triangle = %.2f\n", result);
}

int main()
{
    area();
    return 0;
}
