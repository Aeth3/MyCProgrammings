#include <stdio.h>
#include <string.h>
int main(){
    char word[15] = {'h','e','l','l','o',' ','w','o','r','l','d','\0'};
    for(int i = 0; i<strlen(word); ++i){
        printf("%c", word[i]);
    }
    return 0;
}