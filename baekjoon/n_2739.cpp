#include <iostream>

int n_2739()
{
    int16_t n;
    std::cin >> n;

    for (int16_t i = 1; i < 10; ++i)
        std::cout << n << " * " << i << " = " << (n * i) << std::endl;

    return 0;
}
