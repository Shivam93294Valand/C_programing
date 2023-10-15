#include <stdio.h>
int main()
{
    int n, digit, reversed = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    while (reversed != 0) 
    {
        digit = reversed % 10;
        switch (digit) 
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            default:
                printf("Invalid input\n");
                return 1;
        }
        reversed /= 10;
    }
    return 0;
}