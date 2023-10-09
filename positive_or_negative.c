#include<stdio.h>
void main ()
{
    int a;
    printf("enter a: ");
    scanf("%d",&a);

    if(a>=0)
    {
        printf("the number is positive");
    }
    else
    {
        printf("the number is negative");
    }
}