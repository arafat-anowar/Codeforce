#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    long long int f_2_l_2 = ((long long int)a * b) % 100;
    long long int s_2_l_2 = ((long long int)c * d) % 100;

    printf("%d", (f_2_l_2 * s_2_l_2) / 10 % 10);
    printf("%d", (f_2_l_2 * s_2_l_2) % 10);
    return 0;
}