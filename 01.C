/*
1.	Write a program to find the largest and smallest among
    three entered numbers and also display 
    whether the identified largest/smallest 
    number is even or odd.
*/
#include <stdio.h>

// Function to check if a number is even or odd
const char* check_even_odd(int number) {
    return (number % 2 == 0) ? "even" : "odd";
}

int main() {
    int num1, num2, num3;
    
    // Input: Take three numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    printf("Enter the third number: ");
    scanf("%d", &num3);
    
    // Find the largest and smallest number
    int largest = num1;
    int smallest = num1;

    // Compare to find the largest and smallest
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    // Output the results
    printf("The largest number is %d and it is %s.\n", largest, check_even_odd(largest));
    printf("The smallest number is %d and it is %s.\n", smallest, check_even_odd(smallest));

    return 0;
}
