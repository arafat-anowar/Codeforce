#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", (long long int)n * (n + 1) / 2);
    return 0;
}