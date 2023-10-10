#include <stdio.h>
int main()
{
    int a=1,n,sum=0;
    printf("enter last number of series: ");
    scanf("%d",&n);
    while (a<=n)
    {
        if(a % 2 == 0)
        {
            sum=sum-a;
        }
        else
        {
            sum=sum+a;
        }
        a++;
    }
    printf("sum=%d",sum);
    return 0;
}