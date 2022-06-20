#include <stdio.h>
int matrixAdd(int size1, int size2){
    int num1[size1][size2];
    int num2[size1][size2];
    int result[size1][size2];
    int i;
    int j;

    for (i = 0; i < size1; ++i)
    {
        for (j = 0; j < size2; ++j)
        {
            printf("Enter the array 1 value for [%d][%d]:", i + 1, j + 1);
            scanf("%d", &num1[i][j]);
        } 
    }

    for (i = 0; i < size1; ++i)
    {
        for (j = 0; j < size2; ++j)
        {
            printf("Enter the array 2 value for [%d][%d]:", i + 1, j + 1);
            scanf("%d", &num2[i][j]);
        }
    }
    for (i = 0; i < size1; ++i)
    {
        for (j = 0; j < size2; ++j)
        {
            result[i][j] = num1[i][j] + num2[i][j];
        }
    }
    for (i = 0; i < size1; ++i)
    {
        for (j = 0; j < size2; ++j)
        {
            printf("sum of %d + %d = %d\n",num1[i][j], num2[i][j], result[i][j]);
        }
    }
    return 0;
}

int main(){
    int a;
    int b;
    printf("Enter the size of rows:");
    scanf("%d", &a);
    printf("Enter the size of columns:");
    scanf("%d", &b);
    matrixAdd(a, b);
    return 0;
}