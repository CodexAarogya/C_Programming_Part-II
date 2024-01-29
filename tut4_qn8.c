#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num, sum = 0, avg, counter = 1;
read:
    printf("Enter a number:");
    scanf("%f", &num);
    sum += num;
    /* CODE TO CALCULATE AVERAGE ↓
    {
    avg = sum / counter;   

    }

    */
    

    if (num <= 0)
    {
        printf("Program Terminated !! \n");
        printf("sum=%.2f", sum);
        // printf("Average=%.2f", avg);
        exit(0);
    }
    else
    {
        goto read;
    }
    return 0;
}