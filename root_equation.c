#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,D,x1,x2;
    printf("enter a coefficients of a, b, and c: ");
    scanf("%lf %lf %lf",&a ,&b, &c);

    // let's find discriminant
    D = b*b - 4*a*c;

    if (D>0)
    {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);

        printf("root 1 = %lf\n",x1);
        printf("root 2 = %lf\n",x2);
    }
    else if (D==0)
    {
        x1 = -b / (2*a);
        printf("root 1 = root 2 = %lf\n",x1);
    }
    else
    {
        double real_part = -b / (2*a);
        double imaginary_part = sqrt(-D) / (2*a);
        printf("root 1 = %lf + %lfi\n",real_part,imaginary_part);
        printf("root 2 = %lf - %lfi\n",real_part,imaginary_part);
    }
    return 0;
}