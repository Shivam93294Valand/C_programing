#include <stdio.h>
#include <math.h>
int main ()
{
    int a=0,b=9;
    while (a<=b)
    {
        printf("%d and it's squre root:%.2f\n",a,sqrt(a));
        a++;
    }
    return 0;
}