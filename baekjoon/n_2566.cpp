#include <iostream>

int main()
{
    int16_t max_num(-1), value(0), location(0);

    for (int16_t i = 1; i < 82; ++i)
    {
        std::cin >> value;
        if (value > max_num)
        {
            max_num = value;
            location = i;
        }
    }
    int16_t col = (location % 9 == 0) ? 9 : location % 9;
    int16_t row = ((location - col) / 9) + 1;
    std::cout << max_num << std::endl;
    std::cout << row << " " << col;
    return 0;
}