//Write a C program that accepts an integer and checks whether it is divisible by either 3 or 7

#include<stdio.h>
int main()
{
    int num;

    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    printf("\n");

    (num % 7 == 0) && printf("THE NUMBER IS DIVISIBLE BY 7 \n");
    (num % 3 == 0) && printf("THE NUMBER IS DIVISIBLE BY 3 \n");
    (num % 7 != 0) && (num % 3 != 0) && printf("THE NUMBER is NEITHER DIVISIBLE BY 3 NOR 7\n");
    return 0;
}
