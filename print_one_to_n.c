#include <stdio.h>
int main ()
{
    int a=1,n;
    printf("enter a number: ");
    scanf("%d",&n);

    while (a<=n)            
    {
        printf("%d\n",a);
        a++;
    }   
    return 0;
}