#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    printf("\n");

    printf("Guessing Game");
    printf("\nGame rull is 5 chanse to Guess");
    char yn;
    printf("\nRade to Game = [Y/N]: ");
    scanf("%s", &yn);


    
    if (yn == 'N')
    {
        printf("\nOK");
    }
    else if (yn == 'Y')
    {
        char jo;
        printf("Enter Guess: ");
        scanf(" %c", &jo);
        
        if (jo == 'v')
        {
            printf("\ngood");
        }
        else if (jo != 'v')
        {
            char jo2;
            printf("Enter Guess: ");
            scanf(" %c", &jo2);
        
            if (jo2 == 'v')
            {
                printf("\ngood");
            }
            else if (jo != 'v')
        {
            char jo3;
            printf("Enter Guess: ");
            scanf(" %c", &jo3);
            
            if (jo3 == 'v')
            {
                printf("\ngood");
            }
            else
            {
                char jo4;
                printf("Enter Guess: ");
                scanf(" %c", &jo4);
            
                if (jo4 == 'v')
                {
                    printf("\ngood");
                }
                else if (jo != 'v')
                {
                    char jo3;
                    printf("Enter Guess: ");
                    scanf(" %c", &jo3);
                    
                    if (jo3 == 'v')
                    {
                        printf("\ngood");
                        printf("\n");
                        printf("\ncreater = yosef alex  date = 7/24/2023");
                    }
                    else
                    {
                        printf("\nyou loss");
                        printf("\n");
                        printf("\ncreater = yosef alex  date = 7/24/2023");
                    }
                }
            }
        }
        }
    }

    printf("\n");
    printf("\n");

    return 0;
} 