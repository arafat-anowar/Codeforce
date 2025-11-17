#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        long long int sum = 0;
        if (x <= y)
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
            printf("%lld\n", sum);
        }
        else if (y < x)
        {
            for (int i = y + 1; i < x; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
            printf("%lld\n", sum);
        }
    }
    return 0;
}