#include <stdio.h>
int main()
{
    float unit, amt;
    printf("Enter Unit:");
    scanf("%f", &unit);
    if (unit <= 20)
    {
        printf("Your amount for %.2f unit is Rs. 80/-",unit);
    }
    else if (unit > 20 && unit <= 100)
    {
        amt = unit * 7.30;
        printf("Your amount for %.2f unit is Rs. %.2f/-", unit, amt);
    }
    else
    {
        amt = unit * 9.00;
        printf("Your amount for %.2f unit is Rs. %.2f/-", unit, amt);
    }
    return 0;
}