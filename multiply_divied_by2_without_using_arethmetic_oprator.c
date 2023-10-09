#include <stdio.h>
int main()
{
    int number,multiply,divied;
    printf("enter a number: ");
    scanf("%d",&number);

    // let's multiply givin number by 2.
    multiply=number<<1;
    printf("the number is multiply by 2: %d\n",multiply);

    // let's divied givin number by 2.
    divied=number>>1;
    printf("the number is divied by 2: %d\n",divied);
    return 0;
}