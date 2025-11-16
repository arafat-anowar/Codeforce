#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int flo = floor((float)a / b);
    int cei = ceil((float)a / b);
    int rou = round((float)a / b);
    cout << "floor " << a << " / " << b << " = " << flo << endl
         << "ceil " << a << " / " << b << " = " << cei << endl
         << "round " << a << " / " << b << " = " << rou;
    return 0;
}