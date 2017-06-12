#include <stdio.h>

int main()
{
     char *name[] = {"ravi","ravindra","rohitsingh"};
     
     printf("%s\n",*name);
     printf("%s\n",*(name+1));
     printf("%s\n",*name+1); //without parens
     printf("%s\n",*((name+2)+7)); //incorrect output
     printf("%c\n",name[2][7]);
     

    return 0;
}

