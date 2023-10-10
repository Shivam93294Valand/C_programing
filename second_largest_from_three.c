#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("enter 1st number: ");
    scanf("%d",&a);

    printf("enter 2nd number: ");
    scanf("%d",&b);

    printf("enter 3rd number: ");
    scanf("%d",&c);

    if (a>b)
    {
        if (a>c)
        {
            if (b>c)
            {
                printf("2nd number is second largest\n");
            }
            else
            {
                printf("3rd number is second largest\n");
            }
        }
        else
        {
            printf("1st number is second largest\n");
        }
    }
    else
    {
        if (b>c)
        {
            if (a>c)
            {
                printf("1st number is second largest\n");
            }
            else
            {
                printf("3rd number is second largest\n");
            }
        }
        else
        {
            printf("2nd number is second largest\n");
        }
    }
    return 0;
}