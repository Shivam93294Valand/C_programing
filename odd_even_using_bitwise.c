#include <stdio.h>
int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d",&number);

    if((number&1)==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}