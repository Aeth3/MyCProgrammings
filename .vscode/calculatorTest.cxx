#include <stdio.h>

int calculate(int val1, int val2){
    int result;
    double dresult;
    char sign;
    printf("Enter the operator (+, -, *, /):");
    scanf(" %c", &sign);

    switch (sign)
    {
    case '+':
        result = val1 + val2;
        printf("%i + %i = %i",val1, val2, result);
        break;
    case '-':
        result = val1 - val2;
        printf("%i - %i = %i",val1, val2, result);
        break;
    case '*':
        result = val1 * val2;
        printf("%i * %i = %i",val1, val2, result);
        break;
    case '/':
        dresult = (double) val1 / val2;
        printf("%i / %i = %.2lf",val1, val2, dresult);
        break;
    default:
        printf("Invalid Operation!");
        break;
    }
    return 0;
}
int main(){
    int num1, num2;
    char op = 0;
    printf("Enter the first number:");
    scanf("%i", &num1);
    printf("Enter the second number:");
    scanf("%i", &num2);
    calculate(num1, num2);
    return 0;
}