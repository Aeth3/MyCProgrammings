#include <stdio.h>

void stringStat(){
    char string[50] = "I love programming!";
    int stringNum;
    for (int i = 0; i < 50; i++)
    {
        if (string[i]!='\0')
        {
            stringNum += 1;
        }
        else{
            break;
        }
    }
    printf("The length of the string is %i.", stringNum);
}

int main(){
    stringStat();
}