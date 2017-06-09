#include <stdio.h>
int main()
{
    char c[]="GATE2011";
    char *p = c;
    printf("%s\n",p+1);
    printf("%s\n",p+2);
    printf("%s\n",p+4);
    printf("%s\n",p+p[3]-p[1]); // GATE 2011
    printf("%c\n",p[1]);
    printf("%c\n",p[3]);
    return 0;
}
