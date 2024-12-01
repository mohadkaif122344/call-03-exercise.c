/*
5.	Write a program to determine whether
    the input character is capital or small letter,
    digits or special symbol.
*/
#include <stdio.h>
#include <ctype.h>  // For isdigit(), isupper(), islower() functions

int main() {
    char ch;
    
    // Input: Take a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Check if the character is an uppercase letter
    if (isupper(ch)) {
        printf("%c is an uppercase letter.\n", ch);
    }
    // Check if the character is a lowercase letter
    else if (islower(ch)) {
        printf("%c is a lowercase letter.\n", ch);
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    }
    // If it's none of the above, it's a special symbol
    else {
        printf("%c is a special symbol.\n", ch);
    }

    return 0;
}
