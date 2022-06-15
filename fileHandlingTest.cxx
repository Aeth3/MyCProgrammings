#include <stdio.h>  
#include <stdlib.h>
int main(){  
   FILE *file;  
   char data[255]; //creating char array to store data of file 
   file = fopen("learn.txt", "r");  
   while(fscanf(file, "%s", data)!=EOF){  
   printf("%s", data);  
   }  
   fclose(file);  
   return 0;
}