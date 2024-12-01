/*
3.	Write a program to check whether the entered
 year is leap year or not
 (a year is leap if it is divisible
  by 4 and divisible by 100 or 400.)
*/
#include <stdio.h>

int main() {
    int year;
    
    // Input: Take the year from the user
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Check whether the year is a leap year or not
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
