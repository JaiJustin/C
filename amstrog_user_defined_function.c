/*write a c program to check whether a number is armstrong or not using user defined function*/

#include <stdio.h>
void main()
{

    int num;
    void factorialOrNot();
    printf("Enter the number: ");
    scanf("%d", &num);
    factorialOrNot(num);
}
void factorialOrNot(int num)
{
    int originalNum, remainder, result = 0;

    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if (result == num)
    {
        printf("%d is an Armstrong number . \n", num);
    }
    else
    {
        printf("%d is not an Armstrong number \n.", num);
    }
}