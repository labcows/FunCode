#include <iostream>

int n_10950()
{
    int16_t n, first, second;
    std::cin >> n;

    for (int16_t i = 0; i < n; ++i)
    {
        std::cin >> first >> second;
        std::cout << first + second << std::endl;
    }

    return 0;
}
