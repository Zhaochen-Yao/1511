/*
    A program to calculate the sum of two integers.
*/

#include <stdio.h>

int main(void) {
    int num_students, num_tutors;

    printf("Please enter the number of students and tutors: ");
    scanf("%d %d", &num_students, &num_tutors);

    int sum = num_students + num_tutors;
    printf("%d + %d = %d\n", num_students, num_tutors, sum);

    return 0;
}