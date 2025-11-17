#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int array[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    int fre[m];
    for (int i = 1; i <= m; i++)
    {
        fre[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        fre[array[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cout << fre[i] << endl;
    }

    return 0;
}