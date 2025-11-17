#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int x, y;
        cin >> x >> y;
        long long int sum = 0;
        if (x <= y)
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
            cout << sum << endl;
        }
        else if (y < x)
        {
            for (int i = y + 1; i < x; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
}