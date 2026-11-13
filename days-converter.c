#include<stdio.h>
int main()
{
    int total_days,x,year,week,days;

    printf("ENTER THE TOTAL NUMBER OF DAYS : ");
    scanf("%d",&total_days);

    year = total_days/365;
    week = (total_days%365)/7;
    days = (total_days%365)%7;
   

    printf("\n TOTAL DAYS IN YEAR : %d\n",year);
    printf("\n TOTAL DAYS IN WEEK : %d\n",week);
    printf("\n TOTAL DAYS IN DAYS : %d\n",days);


    return 0;

}
