/*
    Write a program called print_grid.c that reads an integer n 
    from standard input. and prints an n x n grid 
    with all the coordinates of the grid shown.
*/

#include <stdio.h>

int main (void) {
    int num;

    printf("Enter size: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("(%d", i);
            printf(", %d)", j);
        }
        printf("\n");
    }

    return 0;
}