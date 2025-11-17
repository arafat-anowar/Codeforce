#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int flag = 0;
    for (int i = a; i <= b; i++)
    {
        int count = 0;
        int d = i;
        while (d != 0)
        {
            if (d % 10 != 4 && d % 10 != 7)
            {
                count++;
            }
            d = d / 10;
        }
        if (count == 0)
        {
            cout << i << " ";
            flag++;
        }
    }
    if (flag == 0)
    {
        cout << "-1";
    }

    return 0;
}