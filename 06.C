/*
6.	Write a program to check whether a date is
    valid or not.
*/
#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    // A year is a leap year if it is divisible by 4, but not 100, unless divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

// Function to check if the date is valid
int isValidDate(int day, int month, int year) {
    // Check for valid year, month, and day
    if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31) {
        return 0;  // Invalid if any value is out of range
    }

    // Check the days in each month
    if (month == 2) {
        // Check February (Leap year condition)
        if (isLeapYear(year)) {
            if (day > 29) return 0;  // February in leap year has max 29 days
        } else {
            if (day > 28) return 0;  // February in non-leap year has max 28 days
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        // April, June, September, November have 30 days
        if (day > 30) return 0;
    }
    else {
        // All other months have 31 days
        if (day > 31) return 0;
    }

    return 1;  // The date is valid
}

int main() {
    int day, month, year;
    
    // Input: Take day, month, and year from the user
    printf("Enter day: ");
    scanf("%d", &day);
    
    printf("Enter month: ");
    scanf("%d", &month);
    
    printf("Enter year: ");
    scanf("%d", &year);
    
    // Check if the date is valid
    if (isValidDate(day, month, year)) {
        printf("The date %02d/%02d/%04d is valid.\n", day, month, year);
    } else {
        printf("The date %02d/%02d/%04d is not valid.\n", day, month, year);
    }

    return 0;
}
