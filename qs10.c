#include <stdio.h>

int main()
{
    int amount;
    int count = 0;
    int total = 0;

    printf("Enter withdrawal amount (0 to exit): ");
    scanf("%d", &amount);

    while(amount != 0)
    {
        count++;
        total += amount;

        printf("Enter withdrawal amount (0 to exit): ");
        scanf("%d", &amount);
    }

    printf("Total transactions = %d\n", count);
    printf("Total amount withdrawn = %d\n", total);

    return 0;
}