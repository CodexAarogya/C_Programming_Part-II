#include <stdio.h>
int main()
{
    char ctr;
    printf("ASCII VALUES FOR ALL CHARACTERS ARE:\n ");
    for (ctr = 65; ctr <= 90; ctr++)
    {
        printf("%c=%d\t", ctr, ctr);
    }
    printf("\n\n");
    for (ctr = 97; ctr <= 122; ctr++)
    {
        printf("%c=%d\t", ctr, ctr);
    }
    return 0;
}