#include <iostream>

int main()
{
    int16_t x_first(-1), x_second(-1), y_first(-1), y_second(-1), i = 3;

    int16_t x, y;
    while(i--)
    {
        std::cin >> x >> y;
        if (x_first == -1 && x_second == -1)
            x_first = x;
        else if (x != x_first && x_second == -1)
            x_second = x;
        else if (x == x_first)
            x_first = 0;
        else if (x == x_second)
            x_second = 0;

        if (y_first == -1 && y_second == -1)
            y_first = y;
        else if (y != y_first && y_second == -1)
            y_second = y;
        else if (y == y_first)
            y_first = 0;
        else if (y == y_second)
            y_second = 0;
    }

    int16_t x_answer = x_first == 0 ? x_second : x_first;
    int16_t y_answer = y_first == 0 ? y_second : y_first;
    std::cout << x_answer << " " << y_answer;
    return 0;
}