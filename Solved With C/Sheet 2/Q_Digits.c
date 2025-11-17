#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int num;
        scanf("%d", &num);
        int d = num;
        if (d == 0)
        {
            printf("0\n");
            continue;
        }

        while (d != 0)
        {
            printf("%d", d % 10);
            d = d / 10;
            if (d != 0)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}