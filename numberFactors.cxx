#include <stdio.h>
#include <math.h>

int factor(int val){
    int i = 0;
    while (i <= val)
    {
        int mod = fmod(val,i);
        if (mod == 0)
        {
            printf("%i ", i);
        }
        i++;
    }
    return 0;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%i", &num);
    factor(num);
}