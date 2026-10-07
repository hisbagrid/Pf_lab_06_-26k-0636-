#include <stdio.h>

int main()
{
    int fib[10];

    fib[0] = 1;
    fib[1] = 1;

    for(int i = 2; i < 10; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for(int i = 0; i < 10; i++)
    {
        printf("Generation %d = %d\n", i + 1, fib[i]);
    }

    return 0;
}