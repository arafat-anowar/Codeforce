#include <stdio.h>

int main()
{
    int a, b;
    long long int c;
    char s, q;
    scanf("%d %c %d %c %lld", &a, &s, &b, &q, &c);
    if (s == '+')
    {
        ((long long int)a + b == c) ? printf("Yes") : printf("%lld", (long long int)a + b);
    }
    else if (s == '-')
    {
        (a - b == c) ? printf("Yes") : printf("%d", a - b);
    }
    else if (s == '*')
    {
        ((long long int)a * b == c) ? printf("Yes") : printf("%lld", (long long int)a * b);
    }

    return 0;
}