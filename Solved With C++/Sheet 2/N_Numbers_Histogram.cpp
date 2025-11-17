#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    int n;
    cin >> s >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        for (int i = 1; i <= x; i++)
        {
            cout << s;
        }
        cout << endl;
    }

    return 0;
}