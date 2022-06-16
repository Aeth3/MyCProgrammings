#include <stdio.h>
float celsius, fahren;
char yes = 'y';
char no = 'n';

float toFahrenheit(float temp){
    fahren = temp * 9/5 + 32;
    return fahren;
}
int main(){
    printf("THIS PROGRAM WILL CONVERT CELSIUS TO FAHRENHEIT!\n");
   
    printf("Enter the temperature in celsius:");
    scanf("%f", &celsius);
    printf("Fahrenheit:%.2f", toFahrenheit(celsius));
    while (1)
    {
        char ans;
        printf("\nDo you want to convert again?y/n: ");
        scanf("%c", &ans);
        if (ans == 'y')
        {
            main();
        }
        else if (ans == 'n')
        {
            printf("\nThank you for using!");
            return 0;
        }
    }
}