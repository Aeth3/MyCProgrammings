#include <stdio.h>

int main(){
    float mark, totalMark, percentage;
    printf("Enter your mark:");
    scanf("%f", &mark);
    printf("What is the total mark:");
    scanf("%f", &totalMark);
    percentage = mark/totalMark * 100;
    printf("Your score percentage is: %.2f%", percentage);
    if (percentage>=0.75*100)
    {
        printf("\nYou've passed!");
    }
    else{
        printf("\nYou've failed!");
    }
    return 0;
}