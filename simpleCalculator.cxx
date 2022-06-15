#include <stdio.h>
void main()
{
    int a, b; 
    printf("enter the first number:");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d", &b);
    int c;
    c = a+b;
    printf("Addition is - %d \n",c);
    c = a-b;
    printf("Subtraction is - %d \n",c);
    c = a*b;
    printf("Multiplication is - %d \n",c);
    c = a/b;
    printf("Division is %d \n",c);
    c = a%b;
    printf("Remainder is -  %d \n",c);
}