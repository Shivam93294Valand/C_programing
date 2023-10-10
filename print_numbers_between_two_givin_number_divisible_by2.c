#include <stdio.h>
int main ()
{
    int a,b;
    printf("enter small number: ");
    scanf("%d",&a);

    printf("enter big number: ");
    scanf("%d",&b);

    while (a<=b)
    {
        if (a % 2 == 0)
        {
            printf("%d\n",a);
        }
        a++;
    }
    
    return 0;
}