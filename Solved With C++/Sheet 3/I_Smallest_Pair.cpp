#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int arrray[n];
        for (int a = 1; a <= n; a++)
        {
            cin >> arrray[a];
        }
        long long int small = INT_MAX;
        for (int j = 1; j < n; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                long long val = arrray[j] + arrray[k] + k - j;
                if (val < small)
                {
                    small = val;
                }
            }
        }
        cout << small<<endl;
    }

    return 0;
}