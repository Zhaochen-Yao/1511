/*
    Read in a number, and determine whether it is negative.
    If the number is positive, print "You have entered a positive number"
    If the number is a zero, print "You have entered zero".
    If the number is negative, print "Don't be so negative!"
*/

#include <stdio.h>

int main(void) {
    int num;

    scanf("%d", &num);

    if(num == 0) {
        printf("You have entered zero.\n");
    } else if (num < 0) {
        printf("Don't be so negative!\n");
    } else {    // if (num > 0)
        printf("You have entered a positive number.\n");
    }

    return 0;
}