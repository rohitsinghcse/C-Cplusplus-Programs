#include <stdio.h>

int main()
{
    int n,pow,count=1,result;
    printf("Enter number and power \n");
    scanf("%d%d",&n,&pow);
    result = n;
    while(count<pow)
    {
        result *=n; //eg 2*2;2*2*2
        count++;
        //printf("\n%d\n",result);
    }
    printf("Result = %d\n",result);
    
    return 0;
}

