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

    int min = INT_MAX;
    int min_idx = -1;
    int max = INT_MIN;
    int max_idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            min_idx = i;
        }
        if (array[i] > max)
        {
            max = array[i];
            max_idx = i;
        }
    }
    array[max_idx] = min;
    array[min_idx] = max;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}