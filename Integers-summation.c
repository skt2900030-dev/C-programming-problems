#include<stdio.h>
int main()
{
  int n1,n2;
  int sum;

  //receiving the number from the user
  
  printf("ENTER THE FIRST NUMBER : ");
  scanf("%d",&n1);
  printf("ENTER THE SECOND NUMBER : ");
  scanf("%d",&n2);

  printf("\n");
  
  sum = n1+n2;
  printf("SUM OF THE INTEGERS IS = ");   //printing the sum the integers
  printf("%d\n",sum);

  return 0;
}

