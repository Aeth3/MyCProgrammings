#include <stdio.h>

double checkBalance(double bal, double draw){
    if (bal >= draw)
    {
        double amount = bal - draw;
        printf("\nYour withdrawal is successful");
        printf("\nYour remaining balance is: %.2lf", amount);
        return 0;
    }
    else{
        printf("\nWITHDRAWAL ERROR!\nInsufficient balance.");
        return 0;
    }
}
int main(){
    double balance, withdraw;
    printf("Enter your bank balance:");
    scanf("%lf", &balance);
    printf("Enter your withdrawal amount:");
    scanf("%lf", &withdraw);
    checkBalance(balance, withdraw);
    return 0;
}