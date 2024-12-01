/*
Program: Write a program to print
         whether a given number is even or odd.
*/
#include<stdio.h>
 #include<conio.h>
  int main()
{
int num;
printf("Enter the number: "); 
scanf("%d",&num);
 if(num%2==0)
printf("%d is even", num);
else
printf("\n %d is odd", num);
return 0;
}
