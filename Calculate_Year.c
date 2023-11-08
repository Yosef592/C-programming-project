
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    printf("\n");

    int day;
    int year;
    printf("Enter born day: ");
    scanf("%d", &day);
    printf("Enter born year: ");
    scanf(" %d", &year);

    if (day < 30)
    {
        int sum = 2023 - year;
        printf("Your age %d years old", sum);
    }
    else
    {
        int sum2 = 2023 - year + 1;
        printf("Your age %d years old", sum2);
    }

    printf("\n");
    printf("\n");

    return 0;
}