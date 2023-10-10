//  Input electricity unit charge and calculate the total electricity bill according to the given condition:
// - For first 50 units Rs. 0.50/unit
// - For next 100 units Rs. 0.75/unit
// - For next 100 units Rs. 1.20/unit
// - For unit above 250 Rs. 1.50/unit
// - An additional surcharge of 20% is added to the bill.
#include <stdio.h>
int main ()
{
    float electricity_unit_charge,electricity_bill;
    printf("enter electricity unit: ");
    scanf("%f",&electricity_unit_charge);
     
    if (electricity_unit_charge<=50)
    {
       electricity_bill = electricity_unit_charge*0.50;
    }
    else if (electricity_unit_charge<=150)
    {
       electricity_bill = (50*0.50) + ((electricity_unit_charge-50)*0.75);
    }
    else if (electricity_unit_charge<=250)
    {
       electricity_bill = (50*0.50) + (100*0.75) + ((electricity_unit_charge-150)*1.20);
    }
    else
    {
        electricity_bill = (50*0.50) + (100*0.75) + (100*1.20) + ((electricity_unit_charge-250)*1.50);
    }

    electricity_bill = electricity_bill +(0.20*electricity_bill);
    printf("electricity bill: Rs.%f",electricity_bill);

    return 0;
}