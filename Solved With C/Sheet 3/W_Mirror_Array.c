#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int k = m - 1;
        while (j < k)
        {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = tmp;
            j++;
            k--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}