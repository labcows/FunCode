#include <iostream>

int n_2438(){
    int32_t n;
    std::cin >> n;

    for (uint32_t i = 1; i < n + 1; ++i)
    {
        for (uint32_t j = 1; j < i + 1; ++j)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}