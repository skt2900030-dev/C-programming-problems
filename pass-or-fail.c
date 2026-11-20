//Write a C program that accepts marks and displays Pass if the marks are at least 40; otherwise, display Fail.


#include<stdio.h>
int main()
{
 int marks;
  printf("ENTER THE MARKS : ");
  scanf("%d",&marks);

  (marks <= 40) && printf("FAIL");
  (marks >  40) && printf("PASS");
  return 0;
}
