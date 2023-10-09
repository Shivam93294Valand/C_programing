#include <stdio.h>
void main()
{
    int hours,minutes,seconds;
    printf("enter seconds: ");
    scanf("%d",&seconds);

    hours=seconds/3600;
    seconds=seconds-(hours*3600);
    minutes=(seconds/60);
    seconds=seconds-(minutes*60);

    printf("%d:%d:%d",hours,minutes,seconds);

}