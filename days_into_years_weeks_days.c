#include <stdio.h>
void main()
{
    int years,week,days;
    printf("enter days: ");
    scanf("%d",&days);

    years=days/365;
    days=days-365;
    week=days/7;
    days=days-7;

    // this informatation likes
    // yers,week,days
    printf("%d,%d,%d",years,week,days);
}