#include <stdio.h>

/*  print Fahrenheit-Celsius table
        for fahr = 0, 20, ..., 300 */
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /*  lower limit of temperature  */
    upper = 300;    /*  upper limit */
    step = 20;      /*  step size   */

    for (fahr = lower; fahr <= upper; fahr = fahr + step) { /*  typical for loop: for (assignment; comparison; incrementation) {code}*/
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
    }

    return 0;
}