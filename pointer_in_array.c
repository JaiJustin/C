#include <stdio.h>
void main()
{
    int i;
    int a[] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = &a[0];
    for (i = 0; i < 5; i++)
    {
        printf("%d \n", *(ptr + i));
    }
}