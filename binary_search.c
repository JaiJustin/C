#include <stdio.h>
void main()
{
    int a[20], first, last, mid, n, s, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements one by one \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the array of %d :", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the Search element of the array: ");
    scanf("%d", &s);
    first = 0;
    last = n - 1;
    mid = (first + last) / 2;

    while (first <= last)
    {
        if (a[mid] < s)
            first = mid + 1;
        else if (a[mid] == s)
        {
            printf("%d found at location %d.\n", s, mid);
            break;
        }
        else
            last = mid - 1;

        mid = (first + last) / 2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", s);
}