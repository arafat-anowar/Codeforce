#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    long long int c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if (s == '+')
    {
        (long long int)a + b == c ? cout << "Yes" : cout << (long long int)a + b;
    }
    else if (s == '-')
    {
        a - b == c ? cout << "Yes" : cout << a - b;
    }
    else if (s == '*')
    {
        (long long int)a *b == c ? cout << "Yes" : cout << (long long int)a * b;
    }

    return 0;
}