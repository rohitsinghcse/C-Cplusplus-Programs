//Write a program to read 15 integers from user and print sum of only positive integers
#include <stdio.h>

int main()
{
    int i,n,sum=0;
    for(i=0;i<15;i++)
    {
        printf("Enter a number");
        scanf("%d",&n);
        if(n<=0)
            continue;
        sum+=n;
    }
    printf("Sum of positive integers = %d",sum);
    return 0;
}

