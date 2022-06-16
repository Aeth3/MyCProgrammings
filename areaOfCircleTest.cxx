#include <stdio.h>
#include <math.h>
#define PI 3.142857

float circleArea(float val){
    float square = 2.0;
    float area = PI*pow(val,square);
    return area;
}
int main(){
    float radius;
    printf("Enter the radius:");
    scanf("%f", &radius);
    printf("The area of the circle is: %.2f", circleArea(radius));
    return 0;
}