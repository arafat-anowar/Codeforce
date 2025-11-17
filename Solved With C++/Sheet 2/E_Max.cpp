#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxi = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        if (num >= maxi)
        {
            maxi = num;
        }
    }
    cout << maxi;
    return 0;
}