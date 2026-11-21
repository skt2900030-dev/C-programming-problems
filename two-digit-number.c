// Write a C program that accepts an integer and checks whether it is a two-digit number. Treat negative two-digit integers as two-digit numbers

#include<stdio.h>
int main()
{
    int a;
    //user input prompt
    printf("ENTER THE NUMBER : ");
    scanf("%d",&a);

   // Check if the number is a two-digit number (positive or negative)
    a>=10 && a<=99 || a >= -99 && a <= -10    && printf("THE NUMBER IS TWO DIGIT NUMBER ");
    (a>=10 && a<=99) == 0 && printf("the number is invalid");
    return 0;
}-
