#include <stdio.h>
int main ()
{
    int a=1,n,sum=0;
    printf("enter a last number: ");
    scanf("%d",&n);

    while(a<=n)
    {
        sum = sum + a;
        a++;
    }
    printf("%d",sum);
    return 0;
}