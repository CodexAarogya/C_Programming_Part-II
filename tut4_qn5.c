#include <stdio.h>
int main()
{
    int i, fact = 1, num;
    printf("Enter a number:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("%d ! = %d", num, fact);
    return 0;
}