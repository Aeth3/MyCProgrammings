#include <stdio.h>
double rectangleArea(double x, double y){
    double area = x * y;
    return area;
}
int main(){
    double len, wid;
    printf("Enter the length:");
    scanf("%lf", &len);
    printf("Enter the width:");
    scanf("%lf", &wid);
    printf("The area of rectangle is: %.2lf", rectangleArea(len, wid));
    return 0;
}