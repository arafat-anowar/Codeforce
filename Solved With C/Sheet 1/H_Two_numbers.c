#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int flo = floor((float)a / b);
    int cei = ceil((float)a / b);
    int rou = round((float)a / b);
    printf("floor %d / %d = %d\nceil %d / %d = %d\nround %d / %d = %d", a, b, flo, a, b, cei, a, b, rou);
    return 0;
}