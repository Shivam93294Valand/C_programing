#include <stdio.h>
int main()
{
    int a=1,n;
    printf("enter last number: ");
    scanf("%d",&n);

    while (a<=n)
    {
        if (a % 2 != 0)
        {
            printf("%d\n",a);
        }
        a++;
    }
    return 0;
}