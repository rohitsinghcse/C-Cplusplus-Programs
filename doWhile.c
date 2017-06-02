//Write a program to read input until user enter a positive integer
#include <stdio.h>

int main()
{
    int input;
    do
    {
        printf("Enter a value ");
        scanf("%d",&input);
    }while(input<=0);
    return 0;
}

