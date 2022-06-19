#include <stdio.h>

int largestNumber(int size){
    int num[100];
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter a value %d:", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 1; i < size; ++i)
    {
        if (num[i]>=num[0])
        {
            num[0] = num[i];
        }
    }
    printf("The largest number is %i", num[0]);
    return 0;
}
int main(){
    int arraySize;
    printf("Enter the size of array:");
    scanf("%d", &arraySize);
    largestNumber(arraySize);
    return 0;
}