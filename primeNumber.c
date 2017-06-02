//Program to check whether given number is Prime number or not
#include <stdio.h>

int main()
{
    int i,n,flag=0;
    printf("Enter a number to check prime or not = ");
    scanf("%d",&n);
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
             flag=1;
             break;
        }
    }
    if(flag==0)
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is NOT a prime number\n",n);
    }
        
    return 0;
}

