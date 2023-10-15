#include <stdio.h>
int main ()
{
    int n,first_digit,last_digit;
    printf("enter a number: ");
    scanf("%d",&n);

    if (n < 0)
    {
        n = -n;
    }
    else
    {
        n = n;
    }
    last_digit = n %10;

    while(n >= 10)
    {
        n = n/10;
    }
    first_digit=n;

    int sum = first_digit+last_digit;

    printf("sum of first and last digit is:%d",sum);
    return 0;
}