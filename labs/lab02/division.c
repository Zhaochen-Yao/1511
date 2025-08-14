/*
    A program to divide two numbers and prints the formatted result in terminal.
*/

#include <stdio.h>

int main(void) {
    double dividend, divisor;

    printf("Enter the dividend: ");
    scanf("%lf", &dividend);
    
    printf("Enter the divisor: ");
    scanf("%lf", &divisor);

    if (divisor == 0) {
        printf("Don't be silly!\n");
    } 
    else {
        printf("%.0f divided by %.0f\n", dividend, divisor);

        double sum = dividend/divisor;

        printf("To the nearest whole number: %.0lf\n",sum);
        printf("To 1 decimal place: %.1lf\n",sum);
        printf("To 5 decimal places: %.5lf\n",sum);
        printf("To 20 decimal places: %.20lf\n",sum);
    }

    return 0;
}