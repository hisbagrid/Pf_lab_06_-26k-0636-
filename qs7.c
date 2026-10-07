#include <stdio.h>

int main()
{
    int number;
    int original;
    int reverse = 0;
    int digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while(number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    if(reverse == original)
    {
        printf("Palindrome Confirmed\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }

    return 0;
}