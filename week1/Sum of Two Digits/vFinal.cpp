#include <iostream>

int sum(int a1, int b1)
{
    return a1 + b1;
}

int main()
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;
    std::cout << sum(a, b);
    return 0;
}