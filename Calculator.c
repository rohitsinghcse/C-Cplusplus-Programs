//Write a program to make simple Calculator
#include <stdio.h>
int main()
{
    char operator;
    int a,b;
    printf("Enter operator (+,-,/,*,%): ");
    scanf("%c",&operator);
    printf("Enter a and b ");
    scanf("%d %d",&a , &b);
    switch(operator)
    {
        case '+' : printf("Addition = %d\n",a+b);
        break;
        case '-' : printf("Substraction = %d\n",a-b);
        break;
        case '/' : printf("Division = %d\n ",a/b);
        break;
        case '*' : printf("Multiplication = %d \n",a*b);
        break;
        case '%' : printf("Modulo = %d \n",a%b);
        break;
        default : printf("Invalid operator\n");
    }
    return 0;
}

