#include<stdio.h>
int main()
{
    char chtr;
    printf("Enter a character:");
    scanf(" %c",&chtr);
    if(chtr>=65 && chtr <=90)
    {
        printf("%c is a lowercase character.\n",chtr);
        printf("Its uppercase character is %c",chtr+32);
    }
    else if(chtr>=97 && chtr<=122)
    {
        printf("%c is an uppercase character.\n",chtr);
        printf("Its lowercase character is %c",chtr-32);
    }
    else
    {
        printf("INVALID CHARACTER!! \n PLEASE ENTER AN ALPHABET !");
    }
    return 0;
}