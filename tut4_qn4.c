#include <stdio.h>
int main()
{
    float percentage;
    printf("Enter your percentage:");
    scanf("%f", &percentage);
    if (percentage >= 80)
    {
        printf("Distinction.");
    }
    else if (percentage < 80 && percentage >= 60)
    {
        printf("First Division");
    }
    else if (percentage < 60 && percentage >= 45)
    {
        printf("Second Division");
    }
    else if (percentage < 45 && percentage >= 32)
    {
        printf("Third Division");
    }
    else
    {
        printf("Fail !!");
    }
    return 0;
}