#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &array[i]);
    }

    int min = INT_MAX;
    int idx = 0;
    for (int i = 1; i <= n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            idx = i;
        }
    }
    printf("%d %d", min, idx);
    return 0;
}