#include <stdio.h>
int main ()
{
    int a,b;
    printf("enter 1st number: ");
    scanf("%d",&a);

    printf("enter 2nd number: ");
    scanf("%d",&b);

    char ch;
    printf("enter a sign of (+,-,*,/): ");
    scanf(" %c",&ch);

    switch (ch)
    {
        case '+':
        {
        printf("addition:%d",a+b);
        break;
        }
        case '-':
        {
            printf("subtraction:%d",a-b);
            break;
        }
        case '*':
        {
            printf("multipliction:%d",a*b);
            break;
        }
        case '/':
        {
            printf("division:%d",a/b);
            break;
        }
        default :
        {
            printf("invalid input.\nplese check the sign(+,-,*,/)");
        }
    }
    return 0;
}