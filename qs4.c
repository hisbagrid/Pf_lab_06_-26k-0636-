#include <stdio.h>

int main()
{
    int marks[15] = {85, 92, 97, 76, 88, 100, 65, 99, 73, 81, 95, 90, 68, 98, 84};

    int sum = 0;
    int count = 0;
    int highest, lowest;
    float average;

    // Add bonus and cap at 100
    for(int i = 0; i < 15; i++)
    {
        if(marks[i] + 5 > 100)
            marks[i] = 100;
        else
            marks[i] = marks[i] + 5;
    }

    // Find sum, count 100s, highest and lowest
    highest = marks[0];
    lowest = marks[0];

    for(int i = 0; i < 15; i++)
    {
        sum = sum + marks[i];

        if(marks[i] == 100)
            count++;

        if(marks[i] > highest)
            highest = marks[i];

        if(marks[i] < lowest)
            lowest = marks[i];
    }

    average = (float)sum / 15;

    int range = highest - lowest;

    printf("New class average = %.2f\n", average);
    printf("Students with exactly 100 = %d\n", count);
    printf("Range = %d\n", range);

    return 0;
}