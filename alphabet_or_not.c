#include <stdio.h>
int main ()
{
    char ch;
    printf("enter a charactor: ");
    scanf("%c",&ch);

    ('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z') ? printf("this is an alphabet") : printf("this is not an alphabet");
    
    return 0;
}