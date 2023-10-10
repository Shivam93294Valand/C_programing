#include <stdio.h>
int main()
{
    int a ,b ,c;
    printf("enter 1st number: ");
    scanf("%d",&a);

    printf("enter 2nd number: ");
    scanf("%d",&b);

    printf("enter 3rd number: ");
    scanf("%d",&c);

    a>b ? (a>c ? printf("1st is largest") : printf("3rd is largest")) :(b>c ? printf("2nd is largest") : printf("3rd is largest"));
    return 0;
}