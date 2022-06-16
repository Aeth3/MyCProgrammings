#include <stdio.h>
void swapNum(int* num1, int* num2){
    int tempNumber;
    tempNumber = *num1;
    *num1 = *num2;
    *num2 = tempNumber;
}
int main(){
    int firstNum, secondNum;
    printf("Enter the first number:");
    scanf("%i", &firstNum);
    printf("Enter the second number:");
    scanf("%i", &secondNum);
    swapNum(&firstNum,&secondNum);
    printf("Swapped value: first number: %i, second number: %i", firstNum, secondNum);
    return 0;
}