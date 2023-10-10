#include <stdio.h>
int main ()
{
    int side1,side2,side3;
    printf("enter 1st side of tringle: ");
    scanf("%d",&side1);

    printf("enter 2nd side of tringle: ");
    scanf("%d",&side2);

    printf("enter 3rd side of tringle: ");
    scanf("%d",&side3);

    if (( side1*side1 )+( side2*side2 )==( side3*side3 ))
        {
            printf("this is a right angled trigle\n");
        }
        else if (( side1*side1 )+( side3*side3 )==( side2*side2 ))
        {
            printf("this is a right angled trigle\n");
        }
        else if (( side3*side3 )+( side2*side2 )==( side1*side1 ))
        {
            printf("this is a right angled trigle\n");
        }
     else if (side1 == side2 && side2 == side3)
    {
        printf("this is an equilateral tringle\n");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        printf("this is an isosceles tringle\n");
    }
    else if (side1 != side2 && side1 != side3 && side2 != side3)
    {
        printf("this is a sclene tringle\n");
    }
    else 
    {
        printf("these side lengths do not from a valid tringle.plese check the value\n");    
    }
    return 0;
}