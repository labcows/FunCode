#include <iostream>

int main()
{
    int paper [101][101] = {0};
    int16_t small_papers, x, y;

    std::cin >> small_papers;
    while (small_papers > 0)
    {
        std::cin >> x >> y;
        for (int i = x; i < x + 10; ++i)
        {
            for (int j = y; j < y + 10; ++j)
                paper[i][j] = 1;
        }
        --small_papers;
    }

    int32_t total = 0;
    for (int i = 1; i < 101; ++i)
    {
        for (int j = 1; j < 101; ++j)
            if (paper[i][j] == 1) ++total;
    }

    std::cout << total;
    return 0;
}