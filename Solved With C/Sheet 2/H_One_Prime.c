#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int count = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}