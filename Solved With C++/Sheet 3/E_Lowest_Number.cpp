#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    int min = INT_MAX;
    int idx = -1;
    for (int i = 1; i <= n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            idx = i;
        }
    }
    cout << min << " " << idx;
    return 0;
}