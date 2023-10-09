#include <stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    int last_digit = a % 10;
    if(last_digit % 2 == 0)
    {
        printf("the last digit is a even");
    }
    else
    {
        printf ("the last digit is a odd");
    }
    return 0;
}