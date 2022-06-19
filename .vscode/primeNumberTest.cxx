#include <stdio.h>
#include <math.h>

int primeNumber(int val){
    int flag =0;
    if (val == 0 || val == 1)
    {
        flag = 1;
    }
    
    for (int i = 2; i < val/2; i++)
    {
        if (val % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%i is a prime number.", val);
    }
    else{
        printf("%i is not not a prime number.", val);
    }
    return 0;
}
int main(){
    int num = 0;
    printf("Enter a number:");
    scanf("%i", &num);
    primeNumber(num);
}