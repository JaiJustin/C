#include <stdio.h>
void main()
{

    int a[20][20], sum = 0, i, j, m, n, avg = 0;
    printf("Enter the Column Size: ");
    scanf("%d", &n);
    printf("Enter the row Size: ");
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter array a postion %d %d :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
    }

    avg = sum / (n * m);
    printf("sum is :%d\n", sum);
    printf("Average is :%d \n", avg);
}
