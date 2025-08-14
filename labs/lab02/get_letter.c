/*
    Program which prints a letter depending on the user's request.
*/

#include <stdio.h>

int main(void) {

    char is_uppercase;
    printf("Uppercase: ");
    scanf(" %c", &is_uppercase);      // Note spaces: skip blank characters

    int index;
    printf("Index: ");
    scanf("%d", &index);

    if (is_uppercase == 'y') {
        printf("The letter is %c\n", index + 'A');
    } 
    else {    // is_uppercase == 'n'
        printf("The letter is %c\n", index + 'a');
    }

    return 0;
}