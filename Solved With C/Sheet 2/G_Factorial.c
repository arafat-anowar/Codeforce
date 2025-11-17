#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int num;
        scanf("%d", &num);
        long long int fac = 1;
        for (int j = 1; j <= num; j++)
        {
            fac *= j;
        }
        printf("%lld\n", fac);
    }

    return 0;
}