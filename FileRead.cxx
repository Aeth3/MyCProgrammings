#include <stdio.h>
#include <string.h>
int main(){
    FILE *file;
    char data[1000];
    int len;
    file = fopen("C:\\Users\\ComP-PC\\Desktop\\hello.txt", "r");
    while(fgets(data, sizeof(data), file)!=NULL){
        printf("%s", data);
    }
    len = strlen(data);
    printf("\n%d", len);
    fclose(file);
    return 0;
}