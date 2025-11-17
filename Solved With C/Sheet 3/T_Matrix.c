#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m=n;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int pri = 0;
    int sec = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                pri += matrix[i][j];
            }
            if (i + j == n - 1)
            {
                sec += matrix[i][j];
            }
        }
    }
    printf("%d", abs(pri - sec));
    return 0;
}