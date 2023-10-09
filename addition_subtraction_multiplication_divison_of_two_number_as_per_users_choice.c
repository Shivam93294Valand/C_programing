#include <stdio.h>
int main()
{
    int a,b;
    printf("enter 1st number: ");
    scanf("%d",&a);

    printf("enter 2nd number: ");
    scanf("%d",&b);

    char ch; //ch='+','-','*','/'.
    printf("plese choice an oprator('+','-','*','/'): ");
    scanf(" %c",&ch);
    
    if (ch == '+')
        {
        printf("addition:%d",a+b);
        }
    else if (ch == '-')
        {
        printf("subtraction:%d",a-b);
        }
    else if (ch == '*')
        {
        printf("multiplication:%d",a*b);
        }
    else if (ch == '/')
        {
            if (b != 0) 
        {
            printf("%d", a/b);
        }
            else
        {
            printf("Error: Division by zero!\n");
        }
        }
        
        else 
        {
        printf("Invalid operation. Please choose +, -, *, or /\n");
        } 
    return 0;
}