#include <iostream>

int main()
{
    int16_t a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;

    for (int16_t x = -999; x < 1000; ++x)
        for (int16_t y = -999; y < 1000; ++y)
            if (a * x + b * y == c && d * x + e * y == f)
            {
                std::cout << x << " " << y;
                return 0;
            }

    return 0;
}