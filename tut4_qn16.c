#include <stdio.h>
int main()
{
    int a = 0, b = 1, n, i, fib;
    printf("Enter no. of terms: ");
    scanf("%d", &n);
    printf("%d ", a);
    for (i = 0; i < n - 1; i++)
    {
        fib = a + b;
        b = a;
        a = fib;
        printf("%d ", fib);
    }

    return 0;
}
