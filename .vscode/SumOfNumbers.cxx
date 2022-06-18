#include <stdio.h>
#include <stdlib.h>

int numberSum(int val){
    int sum = 0;
   for (int i = val; i > 0; i--)
   {
        sum -= i;
        printf("%i+", i);
   }
   printf("=%i", abs(sum));
   return 0;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%i", &num);
    numberSum(num);
}