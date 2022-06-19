#include <stdio.h>

int fact(int val){
    int i; 
    int ans = 1;
    for (i = 1; i <= val; i++)
    {
        printf("%i*", i);
       ans *= i;
    }
    printf("%i", ans);
    return 0;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%i", &num);
    fact(num);
}