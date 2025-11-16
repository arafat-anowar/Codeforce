#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << ((((long long int)a * b) % 100) * (((long long int)c * d) % 100)) / 10 % 10 << ((((long long int)a * b) % 100) * (((long long int)c * d) % 100)) % 10;
    return 0;
}