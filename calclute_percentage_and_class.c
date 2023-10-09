#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,percentage;
    printf("enter 1st subject marks: ");
    scanf("%d",&m1);

    printf("enter 2nd subject marks: ");
    scanf("%d",&m2);

    printf("enter 3rd subject marks: ");
    scanf("%d",&m3);

    printf("enter 4th subject marks: ");
    scanf("%d",&m4);

    printf("enter 5th subject marks: ");
    scanf("%d",&m5);

    percentage=(m1+m2+m3+m4+m5)/5;
    printf("your percentage is:%d\n",percentage);

    if(percentage<35)
    {
        printf("you are fail\n");
    }
    else if (percentage>=36 && percentage<=45)
    {
        printf("pass class\n");
    }
    else if (percentage>=46 && percentage<=60)
    {
        printf("second class\n");
    }
    else if (percentage>=61 && percentage<=70)
    {
        printf("first class\n");
    }
    else
    {
        printf("distinction\n");
    }
    return 0;
}