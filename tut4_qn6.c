#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("Sum from 1 to %d = %d", num, sum);
    return 0;
}