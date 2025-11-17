#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int pum = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d ", pum);
            pum++;
        }
        printf("PUM\n");
        pum++;
    }

    return 0;
}