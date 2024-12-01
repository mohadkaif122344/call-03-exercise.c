/*
7.	Write a program to check whether a number is positive,
    negative or zero using switch case.
*/
#include <stdio.h>

int main() {
    int number;

    // Input: Take the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Use switch-case to check if the number is positive, negative, or zero
    switch (number > 0) {
        case 1: // number is positive
            printf("%d is a positive number.\n", number);
            break;
        case 0: // number is zero or negative
            // Nested switch to handle zero or negative cases
            switch (number < 0) {
                case 1: // number is negative
                    printf("%d is a negative number.\n", number);
                    break;
                case 0: // number is zero
                    printf("%d is zero.\n", number);
                    break;
            }
            break;
    }

    return 0;
}
