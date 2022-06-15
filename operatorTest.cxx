#include <stdio.h>
void main() {
    int a, b;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    int resultOne, resultTwo;
    resultOne = (a<b) && (b>a);
    resultTwo = (a<b) || (a>b);
    printf("Example of AND operator %d  \n", resultOne);
    printf("Example of OR operator  %d \n", resultTwo);
}