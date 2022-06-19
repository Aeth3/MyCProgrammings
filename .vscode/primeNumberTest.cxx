#include <stdio.h>
#include <math.h>

int primeNumber(int val){
    int flag =0;
    int i;

    if (val == 0 || val == 1)
    {
        flag = 1;
    }
    
    for (i = 2; i <= val/2; ++i)
    {
        if (val % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is a prime number.", val);
    }
    else{
        printf("%d is not a prime number.", val);
    }
    return 0;
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    primeNumber(num);
}