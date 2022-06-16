#include <stdio.h>
double simpleInterest(double num1, double num2, double num3){
    double result = (num1 * num2 * num3)/100;
    return result;
}
int main(){
    double principal, rate, time;
    printf("Enter the principal:");
    scanf("%lf", &principal);
    printf("Enter the interest rate:");
    scanf("%lf", &rate);
    printf("Enter the time:");
    scanf("%lf", &time);
    printf("Your interest is: %.2lf", simpleInterest(principal, rate, time));
}