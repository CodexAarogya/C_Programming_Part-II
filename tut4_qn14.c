#include <stdio.h>
int main()
{
    char gender;
    float balance, amt;
    printf("Enter your balance:");
    scanf("%f", &balance);
    printf("Enter your gender (m/f):");
    scanf(" %c", &gender);
    if (gender == 'f' && balance > 5000)
    {
        amt = 0.05 * balance + balance;
        printf("balance: %.2f \n net-balance: %.2f", balance, amt);
    }
    else
    {
        amt = 0.02 * balance + balance;
        printf("balance: %.2f \nnet-balance: %.2f", balance, amt);
    }
    return 0;
}