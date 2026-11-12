#include<stdio.h>

//declaring the value of pie for whole program
  #define P 3.14159265 

int main()
{
  double r;
  double A,C;


printf("ENTER THE RADIUS OF THE CIRCLE : ");
scanf("%lf",&r);

A = P*r*r;
C =  2*P*r;

printf("\n AREA OF THE CIRCLE = %.2lf\n",A);
printf("\n CIRCUMFERENCE OF THE CIRCLE = %.2lf\n",C);

return 0;
}
