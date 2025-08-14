/*
    Write a C program count_up_down.c that reads one integer n 
    and prints all integers from 0 to n inclusive one per line.
*/

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num > 0) {
        for (int i = 0; i <= num; i++) {
            printf("%d\n", i);
        }
    } 
    else {    // num < 0
        for (int i = 0; i >= num; i--) {
            printf("%d\n", i);
        }
    }

    return 0;
}