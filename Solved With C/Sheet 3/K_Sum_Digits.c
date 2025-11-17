#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += s[i] - '0';
    }
    printf("%lld", sum);
    return 0;
}