#include <stdio.h>
int main()
{
    int num, i, rem;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("reversed:");
    for (i = 0; num != 0; i++)
    {
        rem = num % 10;
        num = num / 10;
        printf("%d", rem);
    }
    return 0;
}
