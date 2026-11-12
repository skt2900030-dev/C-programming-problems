#include<stdio.h>
int main()
{
    double  F,temp;

    printf("ENTER THE TEMPERATURE IN CELCIUS : ");
    scanf("%d",&temp);
//formula to convert temperature from celcius to farenheight
    F = (9/5) * temp + 32;
    printf("\n TEMPERATURE IN FARENHEIGHT = %.2lf\n ",F);


    return 0;
}
