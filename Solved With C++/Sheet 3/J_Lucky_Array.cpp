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
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == min)
        {
            count++;
        }
    }
    count % 2 != 0 ? cout << "Lucky" : cout << "Unlucky";
    return 0;
}