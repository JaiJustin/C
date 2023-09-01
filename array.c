#include <stdio.h>
void main()
{
    int i, s, a[20], sum=0, avg=0;
    printf("Enter the array size: ");
    scanf("%d", &s);
    for (i = 0; i < s; i++)
    {
        printf("Enter the array of %d :", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < s; i++)
    {
        sum += a[i];
    }
    avg = sum / s;
    printf("The array sum is %d \n", sum);
    printf("The array average is : %d \n", avg);
}