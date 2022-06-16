#include <stdio.h>
float averageMark(float num1, float num2, float num3){
    float totalMark = num1 + num2 + num3;
    int numberOfSubjects = 3;
    float average = totalMark/numberOfSubjects; 
    return average;
}
int main(){
    float mark1, mark2, mark3;
    int numberOfSubjects = 3;
    printf("Enter your first subject's mark:");
    scanf("%f", &mark1);
    printf("Enter your second subject's mark:");
    scanf("%f", &mark2);
    printf("Enter your third subject's mark:");
    scanf("%f", &mark3);
    printf("Your average mark:%.2f", averageMark(mark1, mark2, mark3));
    return 0;
}