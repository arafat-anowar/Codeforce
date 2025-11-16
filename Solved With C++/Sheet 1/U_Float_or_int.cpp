#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n;
    cin >> n;
    float val = n - (int)n;
    (val == 0) ? cout << "int " << (int)n : cout << "float " << (int)n << " " << fixed << setprecision(3) << val;
    ;
    return 0;
}