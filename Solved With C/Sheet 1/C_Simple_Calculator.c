#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d + %d = %lld\n%d * %d = %lld\n%d - %d = %lld", x, y, (long long int)x + y, x, y, (long long int)x * y, x, y, (long long int)x - y);
    return 0;
}