#include <stdio.h>
int main()
{
    int num, rev = 0, rem, true;
    printf("Enter a number: ");
    scanf("%d", &num);
    true = num;
    do
    {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    } while (num != 0);
    if (rev == true)
    {
        printf("%d is palindrome.", true);
    }
    else
    {
        printf("%d is not a palindrome.", true);
    }
    return 0;
}