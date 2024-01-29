#include<stdio.h>
int main()
{
    int num,sum=0,i,dgt,rem;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;

    }
    printf("No. of digits= %d \n",i);
    printf("Sum=%d",sum);

    return 0;

}