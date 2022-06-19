#include <stdio.h>

int fibo2(int val){
    int fib1 = 0;
    int fib2 = 1;
    int i = 2;
    printf("%i %i", fib1, fib2);
    while (i <= val)
    {
        int fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
        printf(" %i", fib3);
        i++;
    }
    return 0;
}
int fibo(int val){
    int fib1 = 0;
    int fib2 = 1;
    if (val == 1)
    {
        printf("%i", fib1);
    }
    else{
        printf("%i %i", fib1, fib2);
        for (int i = 2; i <= val; i++)
        {
            int fib3 = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib3;
            printf(" %i", fib3);
        }
    }
    return 0;
}
int main(){
    int num;
    printf("Enter a fibonacci num:");
    scanf("%i", &num);
    fibo(num);
}