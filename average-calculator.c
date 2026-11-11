#include<stdio.h>
int main()
{
 int num1, num2, num3;
 float average;

 printf("ENTER THE FIRST NUMBER : ");
 scanf("%d",&num1);
 printf("ENTER THE SECOND NUMBER : ");
 scanf("%d",&num2);
 printf("ENTER THE THIRD NUMBER : ");
 scanf("%d",&num3);

average = (num1+num2+num3)/3;  //calculating the average of the numbers.
  printf("\n AVERAGE OF THE NUMBERS = %.2f\n",average);

  return 0;

}
