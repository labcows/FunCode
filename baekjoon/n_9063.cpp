#include <iostream>

int main()
{
    std::cin.sync_with_stdio(false);

    int32_t N;
    std::cin >> N;

    if (N == 1)
    {
        std::cout << 0;
        return 0;
    }

    int32_t x, y, min_x(INT32_MAX), max_x(INT32_MIN), min_y(INT32_MAX), max_y(INT32_MIN);

    while(N--)
    {
        std::cin >> x >> y;

        if (x > max_x) max_x = x;
        if (x < min_x) min_x = x;

        if (y > max_y) max_y = y;
        if (y < min_y) min_y = y;

    }

    std::cout << (max_x - min_x) * (max_y - min_y);
    return 0;
}