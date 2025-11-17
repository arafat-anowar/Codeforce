#include <stdio.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int array[n];
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &array[j]);
        }
        long long int small = INT_MAX;
        for (int j = 1; j < n; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                if (array[j] + array[k] + k - j < small)
                {
                    small = array[j] + array[k] + k - j;
                }
            }
        }
        printf("%lld\n", small);
    }

    return 0;
}