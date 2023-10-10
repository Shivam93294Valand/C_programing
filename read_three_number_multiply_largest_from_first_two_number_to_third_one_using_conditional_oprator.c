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

    a>b ? printf("%d",a*c) : printf("%d",b*c);
    
    return 0;
}