#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int d = n;
    int val = 0;
    while (d != 0)
    {
        val = val * 10 + d % 10;
        d = d / 10;
    }
    printf("%d\n", val);
    if (n == val)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}