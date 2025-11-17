#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, even = 0, odd = 0, pos = 0, neg = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (num > 0)
        {
            pos++;
        }
        else if (num < 0)
        {
            neg++;
        }
    }

    cout << "Even: " << even << endl
         << "Odd: " << odd << endl
         << "Positive: " << pos << endl
         << "Negative: " << neg;
    return 0;
}