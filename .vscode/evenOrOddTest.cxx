#include <stdio.h>
#include <math.h>

int evenOdd(int val){
    int mod = fmod(val, 2);
    if (mod == 0)
    {
        printf("Your number is even");
        return 0;
    }
    else{
        printf("your number is odd");
        return 0;
    }
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%i", &num);
    evenOdd(num);
    return 0;
}