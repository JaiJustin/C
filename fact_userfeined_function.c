/*write a c program to find the factorial of number using user defined function*/


#include <stdio.h>
void main()
{
    int number;
    void getFactorial();
    printf("Enter the the number: ");
    scanf("%d", &number);
    getFactorial(number);
}

void getFactorial(int factNumber)
{
    int fact = 1, i;
    for (i = 1; i <= factNumber; i++)
    {
        fact *= i;
    }
    printf("Factorial is %d \n", fact);
}