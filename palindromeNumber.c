#include<stdio.h>
void main()
{
    int n,originalNum,reversedNum=0,rem;
    printf("Enter a number ");
    scanf("%d",&n); //If & is not written then it can segmentation fault
    originalNum=n;
    while(n!=0)
    {
        rem = n%10;
        reversedNum = reversedNum*10 + rem;
        n/=10;
    }
    (reversedNum == originalNum)?printf("Palindrome number\n"):printf("Not a palindrome\n");
    
}
