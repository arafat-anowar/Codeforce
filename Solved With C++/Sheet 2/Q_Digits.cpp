#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int num;
        cin >> num;
        int d = num;
        if (d == 0)
        {
            cout << "0" << endl;
            continue;
        }
        while (d != 0)
        {
            cout << d % 10;
            d = d / 10;
            if (d != 0)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}