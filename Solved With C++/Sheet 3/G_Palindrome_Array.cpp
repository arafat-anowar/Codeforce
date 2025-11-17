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

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (array[i] != array[j])
        {
            cout << "NO";
            return 0;
        }

        i++;
        j--;
    }
    cout << "YES";
    return 0;
}