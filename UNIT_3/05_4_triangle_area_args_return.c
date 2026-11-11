/*
 * Program 5.4: Area of a Triangle - Arguments, Returns a Value
 * Formula: Area = 1/2 x Base x Height
 */
#include <stdio.h>

float area(float base, float height)
{
    float result;

    result = 0.5 * base * height;
    return result;
}

int main()
{
    float base, height;
    float result;

    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);

    result = area(base, height);
    printf("Area of triangle = %.2f\n", result);

    return 0;
}
