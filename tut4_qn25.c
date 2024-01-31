#include <stdio.h>
int main()
{
    int num, amst = 0, rem, real;
    printf("Enter a number: ");
    scanf("%d", &num);
    real = num;
    do
    {
        rem = num % 10;
        num = num / 10;
        amst = amst + (rem*rem*rem);
    } while (num != 0);

    if (amst == real)
    {
        printf("%d is an armstrong number.", real);
    }
    else
    {
        printf("%d is not an armstrong number.", real);
    }
    return 0;
}