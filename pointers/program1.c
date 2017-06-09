#include <stdio.h>

int main()
{
    int i,a[5]={6,12,18,24,30};
    int *p = &a;
    printf("size of int %d\n",sizeof(int));
    for(i=0;i<5;i++)
    {
     printf("address of element  %d = %u\n",i,p);    
     printf("value of element %d = %d \n",i,*p);
     p++;
    }
    
    
    return 0;
}

