#include<stdio.h>
int main()
{
    int P,T,R;
    int SI;
//receiving the input valuees from the user
    printf("ENTER THE PRINCIPAL VALUE : ");
    scanf("%d",&P);
    printf("ENTER THE TIME IN YEARS : ");
    scanf("%d",&T);
    printf("ENTER THE RATE OF INTREST : ");
    scanf("%d",&R);
//mathematical formula to calculate simple intrest 
    SI = (R*P*T)/100;
//printing the calculated simple intrest
    printf("\n SIMPLE INTREST =  Rs %d\n",SI);

    return 0;
}
