/*explain detail about pass by value and pass by reference in c*/
#include <stdio.h>


void main(void)
{
    int num1, num2;
    void swap();

    printf("Enter the first number num1: ");
    scanf("%d", &num1);

    printf("Enter the Second number num2: ");
    scanf("%d", &num2);



    // call function to swap values
    swap(num1, num2);

    

 
}
void swap(int firstVariable, int secondVariable)
{
    // create a temporary variable to hold one of the values to perform the swap
    int tempVariable;

    tempVariable = firstVariable;   /* temporarily save the value of the first variable */
    firstVariable = secondVariable; /* swap the vale of the first variable with the value of the second variable */
    secondVariable = tempVariable;  /* put the value of the first variable into the second variable */

// check values outside the function after swap function is run
    printf("after swap: value of num1: %d \n", firstVariable);
    printf("after swap: value of num2: %d \n", secondVariable);

    return;
}