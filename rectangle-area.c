#include<stdio.h>
int main()
{
 int length,breadth;
 int area,perimeter;

 printf("ENTER THE LENGTH : ");
 scanf("%d",&length);
 printf("ENTER THE BREADTH : ");
 scanf("%d",&breadth);
 
  //area of the rectangle 
  area = length*breadth;
  printf("\n AREA OF THE RECTANGLE = %d\n",area);
  
  //perimeter of the rectangle
  perimeter = 2*(length + breadth);
  printf("\n PERIMEETER OF RECTANGLE = %d\n",perimeter);


  return 0;
}
