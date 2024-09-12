#include <iostream>

int n_2439(){
    int32_t n;
    std::cin >> n;

    for (uint32_t i = 1; i < n + 1; ++i)
    {
        for (uint32_t j = 0; j < n - i; ++j)
        {
            std::cout << " ";
        }

        for (uint32_t j = 0; j < i; ++j)
        {
            std::cout << "*";
        }

        std::cout << "\n";
    }
    return 0;
}