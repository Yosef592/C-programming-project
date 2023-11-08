#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    printf("\n");

    printf("\t \t \t \t \t \t \tLearn Programming");
    char j[] = "java = j", o[] = "python = p", s[] = "c++ = c", i[] = "php = h";
    printf("\n%s", j);
    printf("\n%s", o);
    printf("\n%s", s);
    printf("\n%s", i);
    char inp;
    printf("\n\nEnter your learn programming language: ");
    scanf("%c", &inp);
    if (inp == 'j')
    {
        printf("best java learn youtube chanal is DG Tube");
    }
    if (inp == 'p')
    {
        printf("best python learn youtube chanal is DG Tube");
    }
    if (inp == 'c')
    {
        printf("best c++ learn youtube chanal is DG Tube");
    }
    if (inp == 'h')
    {
        printf("best php learn youtube chanal is DG Tube");
    }

    printf("\n");
    printf("\n");

    return 0;
}