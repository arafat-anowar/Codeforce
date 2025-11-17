#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int flag = 0;
    for (int i = a; i <= b; i++)
    {
        int d = i;
        int count = 0;
        while (d != 0)
        {
            if (d % 10 != 4 && d % 10 != 7)
            {
                count++;
            }
            d = d / 10;
        }
        if (count == 0)
        {
            printf("%d ", i);
            flag++;
        }
    }
    if (flag == 0)
    {
        printf("-1");
    }

    return 0;
}