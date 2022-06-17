#include <stdio.h>
int multiply(int val){
    int size = 9;
    int array[size] = {1,2,3,4,5,6,7,8,9,10};
    int sum;
    for (int i = 0; i <= size; i++)
    {
        sum = val * array[i];
        printf("%i x %i = %i\n", array[i], val, sum);
    }
    return 0;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%i", &num);
    multiply(num);
}