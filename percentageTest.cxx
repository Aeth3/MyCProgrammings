#include <stdio.h>

int main(){
    float mark, totalMark, percentage;

    printf("Enter your mark:");
    scanf("%f", &mark);
    printf("What is the total mark:");
    scanf("%f", &totalMark);
    percentage = mark/totalMark * 100;
    printf("Your score percentage is: %f", percentage);
    return 0;
}