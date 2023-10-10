#include <stdio.h>
int main ()
{
    int a=1,n,count_odd=0 , count_even=0 ;
    while (a<=10)
    {
        printf("enter number: ");
        scanf("%d",&n);

        if (n % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
        a++;
    } 
    printf("count_odd:%d\n",count_odd);
    printf("count_even:%d\n",count_even);
    return 0;
}