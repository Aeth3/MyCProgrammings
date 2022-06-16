#include <stdio.h>
#include <math.h>
double toSquare(int num){
    double ans = sqrt(num);
    return ans;
}
int main(){
    double num;
    printf("Enter a number:");
    scanf("%lf", &num);
    printf("The square root of %.2lf is %.2lf.", num, toSquare(num));
    return 0;
}