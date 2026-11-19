//Write a C program that accepts an integer and checks whether it is divisible by 5

#include<stdio.h>
int main()
{
    int num;

    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    printf("\n");

    (num % 5 == 0) && printf("THE NUMBER IS DIVISIBLE BY 5 \n");
    (num % 5 != 0) && printf("THE NUMBER IS NOT DIVISIBLE BY 5 \n");
    return 0;
}
