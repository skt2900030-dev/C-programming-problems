
#include<stdio.h>
int main()
{
  int a,fact = 1;
  
  //receiving the number from the user;
  printf("ENTER THE NUMBER : ");
  scanf("%d",&a);
  
//calculating factorial of the number using for loop;
  for(int i=1; i<=a; i++)
    {
      fact = fact*i;
      
    }
    //printing the factorial;
  printf("\nFactorial of the number is : %d",fact);
  return 0;
}
