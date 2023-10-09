#include<stdio.h>
int main()
{
    int hight,base,area;
    printf("enter hight: ");
    scanf("%d",&hight);

    printf("enter base: ");
    scanf("%d",&base);

    area=(hight*base)/2;
    printf("%d",area);
    return 0;
}