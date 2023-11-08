#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");


    double num1, num2;
    char op;
    printf("Enter num1: ");
    scanf("%lf", &num1);
    printf("\nEnter oprater: ");
    scanf(" %c", &op);
    printf("\nEnter num2: ");
    scanf(" %lf", &num2);

    if (op == '+')
    {
        double sum = num1 + num2;
        printf("\n%lf + %lf = %lf", num1, num2, sum);
    }
    else if (op == '-')
    {
        double sum = num1 - num2;
        printf("\n%lf - %lf = %lf", num1, num2, sum);
    }
    else if (op == '*')
    {
        double sum = num1 * num2;
        printf("\n%lf * %lf = %lf", num1, num2, sum);
    }
    else if (op == '/')
    {
        double sum = num1 / num2;
        printf("\n%lf / %lf = %lf", num1, num2, sum);
    }
    else
    {
        printf("\noperator is not correct");
    }


    printf("\n");
    printf("\n");

    return 0;
}