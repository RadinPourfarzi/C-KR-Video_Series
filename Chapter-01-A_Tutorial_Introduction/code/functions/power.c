#include <stdio.h>

double power(double base, int exponent);

int main(void)
{
    double result;

    result = power(2.0, 5);

    printf("2^5 = %.2f", result);

    return 0;
}

double power(double base, int exponent)
{
    int i;
    double result;

    result = 1.0;
    for(i = exponent; i > 0; i--)   
        result *= base;

    return result;
}