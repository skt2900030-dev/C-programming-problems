#include<stdio.h>
int main()
{
    int time,second,minute,hour;

    printf("ENTER THE TIME DURATION IS SECONDS : ");
    scanf("%d",&time);

    hour = time/3600;
    minute = (time%3600)/60;
    second = (time%3600)%60;

    printf("\n TIME DURATION IN HOUR = %d\n",hour);
    printf("\n TIME DURATION IN MINUTE = %d\n ",minute);
    printf("\n TIME DURATION IN SECOND = %d\n",second);

    return 0;
}
