#include <stdio.h>
#include <string.h>
int main(){
    char name[30];
    printf("enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("your name: ");
    puts(name);
    printf("size of name: %d", strlen(name)-1);
    return 0;
}