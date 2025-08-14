/*
    Write a program shift_inversion.c 
    which takes a character as input from the user, 
    along with preferences for case inversion and character shifting, 
    and prints the modified character based on these preferences.
*/

#include <stdio.h>

int main(void) {
    char character, convert, result;
    int shift;

    printf("Please enter a character: ");
    scanf(" %c", &character);

    printf("Would you like to invert the case? y or n: ");
    scanf(" %c", &convert);

    printf("By how much would you like to shift the character? ");
    scanf("%d", &shift);

    if ((character >= 'a') && (character <= 'z')) {
        if (convert == 'n') {
            result = character + shift;

            if (result >= 'z') {
                result = result - 26;
            } 
            else if (result <= 'a') {
                result = result + 26;
            }
        } 
        else {    // (convert == 'y')
            result = character + shift - 32;
            if (result >= 'Z') {
                result = result - 26;
            } 
            else if (result <= 'A') {
                result = result + 26;
            }
        }
    } 
    else if ((character >= 'A') && (character <= 'Z')) {
        if (convert == 'n') {
            result = character + shift;
            
            if (result >= 'Z') {
                result = result - 26;
            } 
            else if (result <= 'A') {
                result = result + 26;
            }
        } 
        else {    // (convert == 'y')
            result = character + shift + 32;

            if (result >= 'z') {
                result = result - 26;
            } 
            else if (result <= 'a') {
                result = result + 26;
            }
        }
    }

    printf("The character is %c!\n", result);
    
    return 0;
}