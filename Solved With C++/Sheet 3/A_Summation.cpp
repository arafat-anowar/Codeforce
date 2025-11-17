#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    cout << llabs(sum);
    return 0;
}