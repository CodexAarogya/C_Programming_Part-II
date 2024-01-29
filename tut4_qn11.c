#include <stdio.h>
int main()
{
    float num1, num2, sum, sub, mul, div;
    char read;
    printf("Enter a number:");
    scanf("%f", &num1);
    printf("Enter a number:");
    scanf("%f", &num2);
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    printf("Press mentioned symbol for respective operation: \n+\n-\n*\n/\n :");
    scanf(" %c",&read);

    switch (read)
    {
    case '+':
        printf("%.2f + %.2f = %.2f", num1, num2, sum);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", num1, num2,sub);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f", num1, num2, mul);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f", num1, num2, div);
        break;
    default:
        break;
    }
    return 0;
}