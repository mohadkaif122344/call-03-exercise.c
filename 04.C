/*
4.	Write a program to print day
    name using switch case.
*/
#include <stdio.h>

int main() {
    int day;
    
    // Input: Take the day number from the user
    printf("Enter a day number (1 to 7): ");
    scanf("%d", &day);
    
    // Use switch-case to print the day name
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
