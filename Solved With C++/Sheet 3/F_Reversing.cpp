#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;

        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}