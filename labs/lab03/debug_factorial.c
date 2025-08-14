/*
    Write a C program that takes a positive integer as input, calculates the
    factorial of that number and prints it out.
*/

#include <stdio.h>

int main (void) {
    int num, factorial;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    printf("The factorial of %d is %d\n", num, factorial);

    return 0;
}

    /*
    iint num = 0;
    int factorial = 0;

    print("Enter a number: ");
    scan("%d", num);

    int counter = num;

    while (counter > 0):
        factorial *= counter

    print("The factorial of %d is %d\n");
    */