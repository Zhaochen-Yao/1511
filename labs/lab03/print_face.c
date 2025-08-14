/*
    Write a program print_faces.c that creates a face based on user input.
*/
#include <stdio.h>

int main(void) {
    char eye[3], nose, mouth;
    printf("How do you want to build a face?: ");
    scanf("%2s%c%c", eye, &nose, &mouth);
    if (eye == 'a') {
        printf("_");
        printf("O");
    } else if (eye == 'b') {
        printf("~");
        printf("O");
    } else if (eye == 'c') {
        printf("\\");
        printf("O");
    } else if (eye == 'd') {
        printf("/");
        printf("O");
    }
    if (nose == 'e') {
        printf(" ^\n");
    } else if (nose == 'f') {
        printf(" ~\n");
    }
    if (mouth == 'g') {
        printf("\\_/\n");
    } else if (mouth == 'h') {
        printf("/-\\\n");
    } else if (mouth == 'i') {
        printf(" o\n");
    }
    return 0;
}