#include <stdio.h>
int main ()
{
    int desimal_number,binary[32],i=0,j;
    printf("enter a number: ");
    scanf("%d",&desimal_number);

    if (desimal_number == 0)
    {
        printf("binay number: 0");
    }
    else 
    {
        while (desimal_number > 0)
        {
            binary[i] = desimal_number % 2;
            desimal_number /=2;
            i++;
        }
        printf("binary number: ");
        for(j=i-1;j>=0;j--)
        {
            printf("%d",binary[j]);
        }
    }
    return 0;
}