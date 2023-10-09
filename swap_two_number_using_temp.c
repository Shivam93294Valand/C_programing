#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter 1st number: ");
    scanf("%d",&a);

    printf("enter 2nd number: ");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;
}