/*
Program: Write a program to find whether a 
         character is consonant or vowel using
         switch statement.
*/
#include<stdio.h> 
int main()
{
char ch;

//input alphabet from user

printf("Enter any alphabet : ");  
scanf("%c", &ch);

switch(ch)
{
case 'a':
case 'A':
printf("vowel");
 break;
case 'e':
case 'E':
printf("vowel"); 
break;
case 'i':
case 'I':
printf("vowel");
 break;
case 'o':
case 'O':
printf("vowel"); 
break;
case 'u':
case 'U':
printf("vowel"); 
break;
default:
printf("consonent");
}
return 0;
}
