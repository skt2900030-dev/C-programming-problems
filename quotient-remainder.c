#include<stdio.h>
int main()
{
 int num1,num2;
 int quotient,remainder;

  printf("ENTER THE FIRST NUMBER : ");
  scanf("%d",&num1);
  printf("ENTER THE SECOND NUMBER : ");
  scanf("%d",&num2);

  quotient = num1/num2;
  //dividend = divisor*qoutient + remainder
  remainder = num1 - num2*quotient;

  printf("\n QUOTIENT = %d\n",quotient);
  printf("\n REMAINDER = %d\n",remainder);

  return 0;

}
