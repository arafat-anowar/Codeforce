#include <stdio.h>
#include <string.h>

int main()
{
    char f_1[101], s_1[101];
    scanf("%s %s", f_1, s_1);
    char f_2[101], s_2[101];
    scanf("%s %s", f_2, s_2);

    int val = strcmp(s_1, s_2);
    if (val == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}