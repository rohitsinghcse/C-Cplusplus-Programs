#include<stdio.h>
void main()
{
    int n,originalNum,reversedNum=0,rem;
    printf("Enter a number ");
    scanf("%d",n);
    originalNum=n;
    while(n!=0)
    {
        rem = n%10;
        reversedNum = reversedNum*10 + rem;
        n= n/ 10;
    }
    printf("%d\n",reversedNum);
    (reversedNum == originalNum)?printf("Palindrome number"):printf("Not a palindrome");
    
}
