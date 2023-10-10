#include <stdio.h>
int main ()
{
    int x,y,a=1,b=1;
    printf("enter a number: ");
    scanf("%d",&x);

    printf("enter power: ");
    scanf("%d",&y);

    while (a<=y)
    {
        b *= x;
        a++;
    }
    printf("%d's powe = %d",x,b);

    return 0;
}