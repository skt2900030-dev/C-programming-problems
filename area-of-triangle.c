#include<stdio.h>
int main()
{
    int height,base;
    double area;

    printf("ENTER THE HEIGHT OF TRIANGLE : ");
    scanf("%d",&height);
    printf("ENTER THE BASE OF TRIANGLE : ");
    scanf("%d",&base);
    
 //formula of area of triangle;
    area = 0.5 * base * height;
    printf("]n THE AREA OF TRIANGLE IS = %.2lf\n",area);

    return 0;
}
