#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Difference = %lld", ((long long int)a * b) - ((long long int)c * d));
    return 0;
}