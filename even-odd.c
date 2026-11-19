#include<stdio.h>
int main()
{
    int num;
//receiving the number from the user greaer tghan or equal to 0;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    printf("\n");

  //the right side of statement executes only when right one is true
    (num % 2 == 0) && printf("the number %d is even \n",num);
    (num % 2 != 0) && printf("the number %d is odd \n",num);
    return 0;
