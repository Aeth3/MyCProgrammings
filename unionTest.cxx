#include <stdio.h>
union Student {
    char username[10];
    char email[20];
    char password[15];
    int age;
} studentOne;

int main()
{
    printf("Enter details of first student\n");
    printf("Enter student name:");
    scanf("%s", &studentOne.username);
    printf("%s \n",studentOne.username);

    printf("Enter student email: ");
    scanf("%s", &studentOne.email);
    printf("%s \n",studentOne.email);

    printf("Enter password: ");
    scanf("%s", &studentOne.password);
    printf("%s \n",studentOne.password);

    printf("Enter age: ");
    scanf("%d", &studentOne.age);
    printf("%d \n",studentOne.age);
    
    return 0;
}