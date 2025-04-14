#include <stdio.h>


int main(void)
{
    int change;
    do{
        printf("change owed:\n");
        int result = scanf("%d", &change);
        if(result != 1 || change <= 0){
            printf("change owed:\n");
            while(getchar() != '\n');
            change = 0;
        }
    } while (change <= 0);


    int coins [4] ={25, 10, 5, 1};
    int totalCoins = 0;
    int n = sizeof(coins) / sizeof(coins[0]);

    for(int i = 0; i < n; i++)
    {
        if(change >= coins[i])
        {
            int qtyCoins = change / coins[i];
            totalCoins += qtyCoins;
            change -= (qtyCoins * coins[i]);
        }
    }

    printf("%d", totalCoins);
}

