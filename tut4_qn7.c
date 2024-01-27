#include <stdio.h>
int main()
{
    float num1, num2, sum;
    char cont;
read:
    printf("Enter num1:");
    scanf("%f", &num1);
    printf("Enter num2:");
    scanf("%f", &num2);

    sum = num1 + num2;
    printf("Sum = %.2f \n", sum);

    printf("Do you want to continue? \n press (y) for yes.\n press (n) for no.\n :-");
    scanf(" %c", &cont);
    switch (cont)
    {
    case 'y':
        goto read;
        break;

    default:
        printf("Program Terminated !!");
    }
    return 0;
}