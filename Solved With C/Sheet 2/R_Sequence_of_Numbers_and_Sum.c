#include <stdio.h>

int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m))
    {
        if (n > 0 && m > 0)
        {
            int sum = 0;
            if (n <= m)
            {
                for (int i = n; i <= m; i++)
                {
                    printf("%d ", i);
                    sum += i;
                }
                printf("sum =%d\n", sum);
            }
            else if (m < n)
            {
                for (int i = m; i <= n; i++)
                {
                    printf("%d ", i);
                    sum += i;
                }
                printf("sum =%d\n", sum);
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}