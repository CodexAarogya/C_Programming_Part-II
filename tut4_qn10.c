#include<stdio.h>
#include<stdlib.h>
int main()
{
    int counter=0,num,i;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num==1)
    {
        printf("%d is neither prime nor composite number.",num);
        exit(0);
    }
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            counter++;
        }
    }
    if(counter==2)
    {
        printf("%d is a prime number.",num);
    }
    else
    {
        printf("%d is composite number.",num);
    }
    return 0;
    
}