#include <stdio.h>
int main(){
    int num = 5;
    int *numpointer;
    numpointer = &num;
    printf("your memory address: %d\n", &num);
    printf("your pointer address: %d", numpointer);   
     return 0;
}