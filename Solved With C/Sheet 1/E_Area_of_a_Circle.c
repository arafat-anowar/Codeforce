#include <stdio.h>
#include <math.h>

int main()
{
    float r;
    scanf("%f", &r);
    double pi = 3.141592653;
    printf("%.9lf", pi * pow(r, 2));
    return 0;
}