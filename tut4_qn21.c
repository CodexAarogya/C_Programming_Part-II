#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("%d is not perfect number", num);
        exit(0);
    }
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            // printf("%d",i);         // to identify factors of given number excluding that number...!
            sum += i; // to sum the obtained factor simultaneously !
        }
    }
    if (sum == num)
    {
        printf("%d is a perfect number.", num);
    }
    else
    {
        printf("%d is not perfect number.", num);
    }

    return 0;
}