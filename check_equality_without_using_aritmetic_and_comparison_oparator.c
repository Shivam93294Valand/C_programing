#include <stdio.h>
int main()
{
    int a,b;
    printf("enter 1st number: ");
    scanf("%d",&a);

    printf("enter 2nd number: ");
    scanf("%d",&b);

    !(a^b) ? printf("equality numbers") : printf("not equality number");
    return 0;
}