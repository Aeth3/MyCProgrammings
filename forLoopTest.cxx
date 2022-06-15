#include <stdio.h>
void main() {
  int num;
  for (num = 1; num < 11; num++) {
    if(num >= 5){
          continue;
     }else{
          printf("%d ", num);
     }
   }
}