#include <stdio.h>
int main ()
{
    int a;
    printf("enter a number(1 to 7): ");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        printf("the day is monday\n");
        break;

        case 2:
        printf("the day is tuesday\n");
        break;

        case 3:
        printf("the day is wednesday\n");
        break;

        case 4:
        printf("the day is thursday\n");
        break;

        case 5:
        printf("the day is friday\n");
        break;

        case 6:
        printf("the day is saturday\n");
        break;

        case 7:
        printf("the day is sunday\n");
        break;

        default:
        printf("Invalid input. Please enter a number between 1 and 7.\n");
    }
    return 0;
}