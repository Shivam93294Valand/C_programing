#include <stdio.h>
int main ()
{
    int a=1,c=1,b=26,upper_case = 65, lower_case = 97;
    
    while (a<=b)
    {
        char ch;
        ch = (char)upper_case;
        printf("%2c,",upper_case);
        upper_case++,a++;
    }
    printf("\n");

    while (c<=b)
    {
        char ch;
        ch = (char)lower_case;
        printf("%2c,",lower_case);
        lower_case++,c++;
    }
    return 0;
}