#include<stdio.h>
int main()
{
    int number;

    printf("ENTER THE NUMBER : ");
    scanf("%d",&number);
    printf("\n");
//the rigth side of '&&' executes only if the left side statement is true
    (number > 0)  && printf("%d is POSITIVE.\n ",number);
    (number < 0)  && printf("%d is NEGATIVE ",number);
    (number == 0) && printf("THE NUMBER IS ZERO ");

    return 0;
}
