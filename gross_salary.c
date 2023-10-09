/* Enter basic salary of an employee and calculate Gross salary according to given conditions:
   - Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
   - Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
   - Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic */

#include <stdio.h>
int main ()
{
    float basic_salary;
    printf("plese enter basic salary: ");
    scanf("%f",&basic_salary);

    float hra_pr, da_pr;
    if (basic_salary>=30000)
    {
        hra_pr =  0.30;  // HRA is 30% of basic salary
        da_pr = 0.95;   // DA is 95% of basic salary
    }
    else if (basic_salary >= 20000) {
        hra_pr = 0.25;  // HRA is 25% of basic salary
        da_pr = 0.90;   // DA is 90% of basic salary
    }
    else
    {
        hra_pr = 0.20;  // HRA is 20% of basic salary
        da_pr = 0.80;   // DA is 80% of basic salary
    }
    float hra = basic_salary * hra_pr;
    float da = basic_salary * da_pr;

    float gross_salary = basic_salary + hra + da;
    printf("gross salary:%f",gross_salary);
    return 0;
}   