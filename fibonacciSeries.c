#include <stdio.h>
int main()
{
    printf("Hello, World!\n");
    int first,second,sum=0,counter=0,n;
    printf("Enter first number ");
    scanf("%d",&first);
    printf("Enter second number " );
    scanf("%d",&second);
    printf("Enter number of terms ");
    scanf("%d",&n);
    printf("Fibonacci series : %d %d",first,second);
    while(counter<n)
    {
        sum = first + second;
        printf(" %d",sum);
        first = second;
        second = sum;
        counter++;
    }
    printf("\n");
    return 0;
}

