/*
2.	Write a program to compute grade of students using if else adder. The grades are assigned as followed:
a.	Marks	Grade
b.	marks<50	    F
c.	50≤marks< 60	C
d.	60≤marks<70	    B
e.	70≤marks<80	    B+
f.	80≤marks<90	    A
g.   90≤mars≤ 100	A+
*/
#include <stdio.h>

int main() {
    int marks;
    
    // Input: Take the marks from the user
    printf("Enter the marks of the student: ");
    scanf("%d", &marks);
    
    // Determine the grade based on the marks
    if (marks < 50) {
        printf("Grade: F\n");
    }
    else if (marks >= 50 && marks < 60) {
        printf("Grade: C\n");
    }
    else if (marks >= 60 && marks < 70) {
        printf("Grade: B\n");
    }
    else if (marks >= 70 && marks < 80) {
        printf("Grade: B+\n");
    }
    else if (marks >= 80 && marks < 90) {
        printf("Grade: A\n");
    }
    else if (marks >= 90 && marks <= 100) {
        printf("Grade: A+\n");
    }
    else {
        printf("Invalid marks entered. Marks should be between 0 and 100.\n");
    }

    return 0;
}
