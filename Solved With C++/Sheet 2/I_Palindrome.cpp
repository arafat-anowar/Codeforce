#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int d = n;
    int val = 0;
    while (d != 0)
    {
        val = val * 10 + d % 10;
        d = d / 10;
    }
    cout << val;
    if (n == val)
    {
        cout << endl
             << "YES";
    }
    else
    {
        cout << endl
             << "NO";
    }

    return 0;
}