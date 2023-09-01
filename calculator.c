#include <stdio.h>
void main()
{
    int num1, num2, sum;
    char opt;

    printf("Welcome to Calculator Get start \n \n");
    printf("Enter the Operation use this symbols +,-,/,* : ");
    scanf("%c", &opt);
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the Second number: ");
    scanf("%d", &num2);

    if (opt == '+')
    {
        printf("Your Selected Addition \n");
        sum = num1 + num2;
        printf("%d + %d = %d \n", num1, num2, sum);
    }
    else if (opt == '-')
    { printf("Your Selected  Subtract \n");
        sum = num1 - num2;
        printf("%d - %d = %d \n", num1, num2, sum);
    }
    else if (opt == '/')
    {
        printf("Your Selected  Division \n");
        sum = num1 / num2;
        printf("%d / %d = %d \n", num1, num2, sum);
    }
    else if (opt == '*')
    {
        printf("Your Selected  Multiplication \n");
        sum = num1 * num2;
        printf("%d x %d = %d \n", num1, num2, sum);
    }
    else
    {

        printf("Enter the valid Operation \n");
        
    }
}
