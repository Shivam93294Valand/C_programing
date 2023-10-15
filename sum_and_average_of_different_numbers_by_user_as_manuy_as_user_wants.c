#include <stdio.h>
int main ()
{
    int a, sum=0,count=0;
    while(1)
    {
        printf("enter a number(if you want to stop enter number plese enter 0): ");
        scanf("%d",&a);
        sum = sum+a;
        count ++;
        if (a == 0)
        break; 
    }
    printf("sum = %d\n",sum);
    printf("average=%d",(sum/count));
    return 0;
}