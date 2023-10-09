#include<stdio.h>
void main()
{
    int principal,roi,time_period,simple_interest;
    printf("enter principal: ");
    scanf("%d",&principal);

    printf("enter roi: ");
    scanf("%d",&roi);

    printf("enter time period: ");
    scanf("%d",&time_period);

    simple_interest=(principal*roi*time_period)/100;
    printf("%d",simple_interest);
}