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


/****** Alternate solution using for loop ***************************/
#include <stdio.h>

// int main()
// {
//     int base,n,p;
//     printf("Enter base and n"); // if base =2 and n = 3 then its 2 power 3
//     scanf("%d%d",&base,&n);
    
//     for(p=1;n>0;n--)
//     {
//         p *= base; // 
//     }
//     printf("Result = %d\n",p);
    
//     return 0;
// }
