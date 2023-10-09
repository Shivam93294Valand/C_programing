#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter 1st number: ");
    scanf("%d",&a);

    printf("enter 2nd number: ");
    scanf("%d",&b);

    printf("enter 3rd number: ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("the 1st number is largest");
        }
        else
        {
            printf("the 3rd number is largest");
        }
    }
    else
    {
        if(b>c)
        {
            printf("the 2nd number is largest");
        }
        else
        {
            printf("the 3rd number is largest");
        }
    }
    return 0;
}