#include<stdio.h>
int main()
{
    int quantity;
    float price,total_bill;

    printf("ENTER THE PRICE OF THE ITEM : ");
    scanf("%f",&price);
    printf("ENTER THE QUATITY OF THE ITEM PURCHASED : ");
    scanf("%d",&quantity);

    total_bill = price*quantity;
    printf("\n TOTAL BILL CALCULATED IS = %.2f\n",total_bill);

    return 0;
}
