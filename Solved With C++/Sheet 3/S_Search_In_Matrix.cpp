#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x == matrix[i][j])
            {
                count++;
            }
        }
    }
    if (count == 0)
    {
        cout << "will take number";
    }
    else
    {
        cout << "will not take number";
    }
    return 0;
}