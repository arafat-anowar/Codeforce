#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int pri = 0;
    int sec = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                pri += matrix[i][j];
            }
            if (i + j == n - 1)
            {
                sec += matrix[i][j];
            }
        }
    }
    cout << abs(pri - sec);
    return 0;
}