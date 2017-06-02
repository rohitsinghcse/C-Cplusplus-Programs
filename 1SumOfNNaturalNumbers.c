//Write a program to calculate the sum of natural numbers
#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum of natural number = %d \n",sum);

    return 0;
}

