// Write a C program that accepts an integer and checks whether it lies in the inclusive range 100 to 500

#include<stdio.h>
int main()
{
  int n;
  printf("ENTER THE NUMBER : ");
  scanf("%d",&n);

  if(100<n && n<500)
  {
    printf("YES the number %d lies in between 100 and 500",n);
  } 
    else {
        printf("No the number %d don't lies in between 100 and 500",n);
    }
  return 0;
}
