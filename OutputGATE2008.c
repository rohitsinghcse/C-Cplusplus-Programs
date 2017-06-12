#include <stdio.h>

int main()
{
    char a[6]="world";
    int i,j;
    for(i=0,j=5;i<j;a[i++]=a[j--]);
    printf("%s\n",a); // No output blank 
    printf("%s\n",a+1); //dlld

    return 0;
}

