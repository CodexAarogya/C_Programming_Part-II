#include <stdio.h>
#include <math.h>
int main()
{
    int i, square, cube;
    for (i = 1; i <= 10; i++)
    {
        square = pow(i, 2);
        cube = pow(i, 3);
        printf("Square of %d= %d\t", i, square);
        printf("cube of %d= %d\n", i, cube);
    }
    return 0;
}