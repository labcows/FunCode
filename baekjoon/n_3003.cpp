#include <iostream>

int main()
{
    int16_t chess[6] = {1, 1, 2, 2, 2, 8};
    int16_t number;

    for (int16_t i = 0; i < 6; ++i)
    {
        std::cin >> number;
        chess[i] -= number;
    }

    for (int16_t i : chess)
        std::cout << i << " ";

    return 0;
}