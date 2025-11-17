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
        long long int fac = 1;
        for (int j = 1; j <= num; j++)
        {
            fac *= j;
        }
        cout << fac << endl;
    }

    return 0;
}