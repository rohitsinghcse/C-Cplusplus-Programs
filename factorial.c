//WAP to find Factorial of a number
#include <stdio.h>

int main()
{
   int n,i;
   unsigned long long factorial = 1;
   printf("Enter a number ");
   scanf("%d",&n);
   if(n<0)
   {
       printf("Factorial of negative number does not exist");
   }
   else
   {
       for(i=2;i<=n;i++)
       {
           factorial *= i;
       }
   }
   printf("Factorial of %d = %llu \n",n,factorial);
    return 0;
}

