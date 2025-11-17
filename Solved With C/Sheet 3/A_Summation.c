#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    printf("%lld", llabs(sum));
    return 0;
}