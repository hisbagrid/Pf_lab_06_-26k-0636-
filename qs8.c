#include <stdio.h>

int main()
{
    int seats[15] = {1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0};

    int booked = 0;
    int empty = 0;
    int firstAvailable = -1;
    int lastAvailable = -1;

    // Count booked and empty seats
    for(int i = 0; i < 15; i++)
    {
        if(seats[i] == 1)
            booked++;
        else
            empty++;
    }

    // Find first available seat
    for(int i = 0; i < 15; i++)
    {
        if(seats[i] == 0)
        {
            firstAvailable = i + 1;
            break;
        }
    }

    // Find last available seat
    for(int i = 0; i < 15; i++)
    {
        if(seats[i] == 0)
        {
            lastAvailable = i + 1;
        }
    }

    // Book first 3 available seats
    int bookedNew = 0;

    for(int i = 0; i < 15; i++)
    {
        if(seats[i] == 0 && bookedNew < 3)
        {
            seats[i] = 1;
            bookedNew++;
        }
    }

    // Print results
    printf("Total booked seats = %d\n", booked);
    printf("Total empty seats = %d\n", empty);
    printf("First available seat = %d\n", firstAvailable);
    printf("Last available seat = %d\n", lastAvailable);

    printf("Final seating chart:\n");

    for(int i = 0; i < 15; i++)
    {
        printf("%d ", seats[i]);
    }

    return 0;
}