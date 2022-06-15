#include <stdio.h>

int main() {
  int marks[5];
  printf("Enter your marks in five subjects: ");

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &marks[i]);
  }

  printf("Displaying marks: ");

  for(int i = 0; i < 5; ++i) {
     printf("%d \n", marks[i]);
  }
  return 0;
}