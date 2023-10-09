#include <stdio.h>
int main ()
{
    char ch;
    printf("enter a number or character: ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z')
    {
        printf("the entered character is an upper case\n");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("the entered character is a lower case\n");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("the entered is a number");
    }
    else
    {
        printf("the entered is a special charactor");
    }
    return 0;
}