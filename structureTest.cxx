#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student {
    char username[50];
    char email[50];
    char password[50];
    char age[3];
} studentOne;

int main()
{
    printf("Enter details of first student\n");
    printf("Enter student name:");
    fgets(studentOne.username, sizeof(studentOne.username), stdin);

    printf("Enter student email: ");
    fgets(studentOne.email, sizeof(studentOne.email), stdin);

    printf("Enter password: ");
    fgets(studentOne.password, sizeof(studentOne.password), stdin);
    
    printf("Enter age: ");
    fgets(studentOne.age, sizeof(studentOne.age), stdin);
    int valAge = atoi(studentOne.age);
    //printing data
    
   puts(studentOne.username);
   puts(studentOne.email);
   puts(studentOne.password);
   printf("%d", valAge);
   return 0;
}