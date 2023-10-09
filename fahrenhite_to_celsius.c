#include<stdio.h>
void main()
{
    int fahrenheit,celsius;
    printf("enter temperature in fahrenheit: ");
    scanf("%d",&fahrenheit);

    celsius=((fahrenheit-32)*5)/9;
    printf("%d",celsius);
}