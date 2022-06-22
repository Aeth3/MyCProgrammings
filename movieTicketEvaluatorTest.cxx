#include <stdio.h>

int ticketCalculator(int num){
    char description[5][255] = {"Party", "Extra Family", "Family", "Duo","Solo"};
    int amount[5] = {500, 350, 150, 120, 45};
    int qty[5] = {15, 10, 4, 3, 1};
    int rewPoints[5] = {5, 4, 2, 1, 0};
    int ticket = 0;
    int point = 0;

    while (num>=amount[4])
    {
        if (num >= amount[0])
        {
            while (num >= amount[0])
            {
                num = num - amount[0];
                ticket = ticket + qty[0];
                point = point + rewPoints[0];
            }
            continue;
        }
        else if (num >= amount[1])
        {
            while (num >= amount[1])
            {
                num = num - amount[1];
                ticket = ticket + qty[1];
                point = point + rewPoints[1];
            }
            continue;
        }
        else if (num >= amount[2])
        {
            while (num >= amount[2])
            {
                num = num - amount[2];
                ticket = ticket + qty[2];
                point = point + rewPoints[2];
            }
            continue;
        }
        else if (num >= amount[3])
        {
            while (num >= amount[3])
            {
                num = num - amount[3];
                ticket = ticket + qty[3];
                point = point + rewPoints[3];
            }
            continue;
        }
        else if (num >= amount[4])
        {
            while (num >= amount[4])
            {
                num = num - amount[4];
                ticket = ticket + qty[4];
                point = point + rewPoints[4];
            }
            continue;
        }
    } 
    printf("Result: %d tickets, %d reward points, and $%d balance.", ticket, point, num); 
    return 0;
}
int main(){
    int val;
    printf("Enter amount:");
    scanf("%d", &val);
    ticketCalculator(val);
}