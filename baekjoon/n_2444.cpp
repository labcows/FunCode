#include <iostream>

int main()
{
    int16_t N;
    std::cin >> N;

    for (int16_t i = 1; i < N + 1; ++i)
    {
        for (int16_t j = 0; j < N - i; ++j)
            std::cout << " ";

        for (int16_t j = 0; j < 2 * i - 1; ++j)
            std::cout << "*";

        std::cout << '\n';
    }

    for (int16_t i = N - 1; i >= 1; --i)
    {
        for (int16_t j = 0; j < N - i; ++j)
            std::cout << " ";

        for (int16_t j = 0; j < 2 * i - 1; ++j)
            std::cout << "*";

        std::cout << '\n';
    }

    return 0;
}