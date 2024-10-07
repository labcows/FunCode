#include <iostream>

int main()
{
    float a1, z0, c, n0;
    std::cin >> a1 >> z0 >> c >> n0;

    if (a1 * n0 + z0 <= c * n0 && a1 <= c)
        std::cout << 1;
    else
        std::cout << 0;

    return 0;
}