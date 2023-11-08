#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    printf("\n");

    printf("Enter 3 digte linux comand");

    char c1;
    printf("\nCommand 1: ");
    scanf("%c", &c1);
    char c2;
    printf("Command 1: ");
    scanf(" %c", &c2);
    char c3;
    printf("Command 1: ");
    scanf(" %c", &c3);

    if (c1 == 'p' && c2 == 'w' && c3 == 'd')
    {
        printf("true");
        printf("\ntrue");
        printf("\ntrue");
        printf("\n\nYou win");
    }
    if (c1 != 'p' && c2 == 'w' && c3 == 'd')
    {
        printf("false");
        printf("\ntrue");
        printf("\ntrue");
        printf("\n\nYou loos");
    }
    if (c1 == 'p' && c2 != 'w' && c3 == 'd')
    {
        printf("true");
        printf("\nfalse");
        printf("\ntrue");
        printf("\n\nYou loos");
    }
    if (c1 == 'p' && c2 == 'w' && c3 != 'd')
    {
        printf("true");
        printf("\ntrue");
        printf("\nfalse");
        printf("\n\nYou loos");
    }
    if (c1 == 'p' && c2 != 'w' && c3 != 'd')
    {
        printf("true");
        printf("\nfalse");
        printf("\nfalse");
        printf("\n\nYou loos");
    }
    if (c1 != 'p' && c2 != 'w' && c3 == 'd')
    {
        printf("false");
        printf("\nfalse");
        printf("\ntrue");
        printf("\n\nYou loos");
    }
    if (c1 != 'p' && c2 == 'w' && c3 != 'd')
    {
        printf("false");
        printf("\ntrue");
        printf("\nfalse");
        printf("\n\nYou loos");
    }
    if (c1 != 'p' && c2 != 'w' && c3 != 'd')
    {
        printf("false");
        printf("\nfalse");
        printf("\nfalse");
        printf("\n\nYou loos");
    }

    printf("\n");
    printf("\n");

    return 0;
}