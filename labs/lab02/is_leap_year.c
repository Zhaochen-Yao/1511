/*
    Test if a year is leap year
    https://en.wikipedia.org/wiki/Leap_year
*/

#include <stdio.h>

int main(void) {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if (((year % 4 == 0 ) && !(year % 100 == 0)) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}