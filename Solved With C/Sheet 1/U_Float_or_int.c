#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);
    float val = n - (int)n;
    if (val == 0)
    {
        printf("int %d", (int)n);
    }
    else
    {
        printf("float %d %.3f", (int)n, val);
    }
    return 0;
}