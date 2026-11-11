/*
 * Program 5.2: Area of a Triangle - Arguments, No Return Value
 * Formula: Area = 1/2 x Base x Height
 */
#include <stdio.h>

void area(float base, float height)
{
    float result;

    result = 0.5 * base * height;
    printf("Area of triangle = %.2f\n", result);
}

int main()
{
    float base, height;

    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);

    area(base, height);

    return 0;
}
