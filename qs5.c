#include <stdio.h>

int main()
{
    int notes500[5] = {10, 5, 8, 12, 6};
    int notes200[5] = {20, 15, 10, 8, 14};
    int notes100[5] = {30, 25, 40, 35, 20};

    int total = 0;
    int amount;

    // Calculate total money in ATM
    for(int i = 0; i < 5; i++)
    {
        total = total + notes500[i] * 500
                      + notes200[i] * 200
                      + notes100[i] * 100;
    }

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if(amount > total)
    {
        printf("Insufficient Funds\n");
    }
    else if(amount % 100 != 0)
    {
        printf("Invalid Amount\n");
    }
    else
    {
        printf("Transaction Approved\n");
    }

    return 0;
}