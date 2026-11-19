/*
  Write a C program that accepts a person's age and displays whether the person is eligible to vote.
  Consider 18 years as the minimum age.
*/
#include<stdio.h>
int main()
{
    int age;

    printf("ENTER THE AGE OF THE PERSON : ");
    scanf("%d",&age);
    printf("\n");

  //the right side of statement executes only when right one is true
    (age < 18) && printf(" NOT ELIGIBLE TO VOTE !\n");
    (age >= 18) && printf(" ELIGIBLE TO VOTE !\n");
    return 0;
}
