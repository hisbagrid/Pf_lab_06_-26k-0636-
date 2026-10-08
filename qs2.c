#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char passwords[5][20] = {
        "Abc12345",
        "HELLO789",
        "abcde",
        "PassWord1",
        "xyZ123"
    };

    int strongestScore = -1;
    int strongestPassword = 0;
    int below10 = 0;

    for(int i = 0; i < 5; i++)
    {
        int score = 0;

        // Check every character
        for(int j = 0; passwords[i][j] != '\0'; j++)
        {
            if(islower(passwords[i][j]))
                score += 1;

            if(isupper(passwords[i][j]))
                score += 2;

            if(isdigit(passwords[i][j]))
                score += 3;
        }

        // Length bonus
        if(strlen(passwords[i]) >= 8)
            score += 5;

        // "123" penalty
        if(strstr(passwords[i], "123") != NULL)
            score -= 3;

        printf("%s = Score %d\n", passwords[i], score);

        // Count below 10
        if(score < 10)
            below10++;

        // Find strongest
        if(score > strongestScore)
        {
            strongestScore = score;
            strongestPassword = i;
        }
    }

    printf("Strongest password = %s\n", passwords[strongestPassword]);
    printf("Strongest score = %d\n", strongestScore);
    printf("Passwords below 10 = %d\n", below10);

    return 0;
}