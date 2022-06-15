#include <stdio.h>

int main(){
    int birthYear;
    int currentYear;
    int age;
    printf("Enter your birthdate:");
    scanf("%d", &birthYear);
    printf("Enter the current year:");
    scanf("%d", &currentYear);
    age = currentYear - birthYear;
    printf("Your age is: %d", age);
    return 0;
}