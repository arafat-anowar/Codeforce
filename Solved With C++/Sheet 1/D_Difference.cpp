#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << "Difference = " << ((long long int)a * b) - ((long long int)c * d);
    return 0;
}