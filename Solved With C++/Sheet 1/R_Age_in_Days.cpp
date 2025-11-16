#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int years = n / 365;
    int months = n % 365 / 30;
    int days = n % 365 - (months * 30);
    cout << years << " years" << endl
         << months << " months" << endl
         << days << " days";
    return 0;
}