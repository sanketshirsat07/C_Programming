/*
 * Program 5.3: Area of a Triangle - No Arguments, Returns a Value
 * Formula: Area = 1/2 x Base x Height
 */
#include <stdio.h>

float area()
{
    float base, height;
    float result;

    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);

    result = 0.5 * base * height;
    return result;
}

int main()
{
    float result;

    result = area();
    printf("Area of triangle = %.2f\n", result);

    return 0;
}
