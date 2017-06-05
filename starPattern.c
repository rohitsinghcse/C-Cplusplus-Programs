#include <stdio.h>

int main()
{
    int numOfRows,i,j,k;
    printf("Enter number of rows = ");
    scanf("%d",&numOfRows);
    for(i=1;i<=numOfRows;i++)
    {
        for(j=i;j<numOfRows;j++)
        {
            printf(" ");
        }
        for(k=1;k<2*i;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
        *                                                                                                                                                                         
       ***                                                                                                                                                                        
      *****                                                                                                                                                                       
     *******                                                                                                                                                                      
    *********        


*/
