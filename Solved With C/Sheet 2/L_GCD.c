#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int gcd = 0;
    if (a <= b)
    {
        for (int i = 1; i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                if (gcd <= i)
                {
                    gcd = i;
                }
            }
        }
    }
    else if (a > b)
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                if (gcd <= i)
                {
                    gcd = i;
                }
            }
        }
    }

    printf("%d", gcd);
    return 0;
}