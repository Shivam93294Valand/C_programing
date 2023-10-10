#include <stdio.h>
int main()
{
    int a=1,b=1,n,sum=0;
    printf("enter last number of series: ");
    scanf("%d",&n);

    while (a<=n)
    {
        a=b*b;        
        sum=sum+a;
        b++;
        a++;
    }
    printf("sum=%d",sum);
    return 0;
}