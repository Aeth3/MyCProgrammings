#include <stdio.h>
int add(int firstNum, int secondNum){
    int sum;
    sum = firstNum + secondNum;
    return sum;
}

void main() {
    int a, b;
    printf("please enter first number:");
    scanf("%d", &a);
    printf("pleade enter second number:");
    scanf("%d", &b);
    int result;
    result = add(a, b);
    printf("The answer is: %d",result);
}