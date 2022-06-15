#include <stdio.h>
int main () {

   int  number = 5;  
   int  *numPointer;       
   numPointer = &number;      
   printf("Address of number variable is: %x \n", &number  );
   printf("Address stored in numPointer variable is: %x\n", numPointer );
   printf("Value of *numPointer variable is: %d\ ", *numPointer );

   return 0;
}