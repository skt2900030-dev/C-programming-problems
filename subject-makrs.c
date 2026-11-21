//Write a C program that accepts marks in three subjects and displays Pass only if the student scores at least 40 in every subject.

#include<stdio.h>
int main()
{
    int a,b,c;
    //user input prompt
    printf("ENTER THE MATH MARKS : ");
    scanf("%d",&a);
    printf("ENTER THE PHYSICS MARKS : ");
    scanf("%d",&b);
    printf("ENTER THE CHEMISTRY MARKS : ");
    scanf("%d",&c);

    a,b,c >= 40 && printf("PASS ");
    a,b,c < 40 && printf("FAIL ");
    
    return 0;
}
