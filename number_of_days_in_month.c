#include <stdio.h>
int main()
{
    int a;
    printf("enter  a number(1 to 12): ");
    scanf("%d",&a);

    switch (a)
    {
        case 1:
        printf("the month is janurary.\nthe days is 31\n");
        break;

        case 2:
        printf("the month is feburary.\nthere days is either 28 or 29. during leep year\n");
        break;

        case 3:
        printf("the month is march.\nthe day is 31\n");
        break;

        case 4:
        printf("the month is april\nthe day is 30\n");
        break;

        case 5:
        printf("the month is may\nthe day is 31\n");
        break;

        case 6:
        printf("the month is jun\nthe day is 30\n");
        break;

        case 7:
        printf("the month is july\nthe day is 31\n");
        break;

        case 8:
        printf("the month is auguest\nthe day is 31");
        break;

        case 9:
        printf("the month is sepemtember\nthe day is 30\n");
        break;

        case 10:
        printf("the month is octomber\nthe day is 31\n");
        break;

        case 11:
        printf("the month is nevember\nthe day is 30\n");
        break;

        case 12:
        printf("the month is desember\nthe day is 31\n");
        break;

        defaulf:
        printf("invalid input.\nplese check input between 1 to 12\n");
    }
    return 0;
}