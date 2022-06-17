#include <stdio.h>
int n = 2;
int largestNumber(int val[]){
    int temp = val[0];
    for (int i = 0; i <= n; i++)
    {
        if (val[i] > temp)
        {
            temp = val[i];
        }
    }
    return temp;
}
int main(){
    int num[n];
    char result;
    for (int i = 0; i <= n; i++)
    {
        printf("Enter three numbers:");
        scanf("%i", &num[i]);
    }
    result = largestNumber(num);
    printf("The largest number is: %i", result);
}