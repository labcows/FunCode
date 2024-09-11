#include <iostream>

int n_2480()
{
    int32_t a, b, c, max_count = 0, max_index = 0, max_number = 0, reward;
    int32_t array[7] {0, 0, 0, 0, 0, 0, 0};

    std::cin >> a >> b >> c;

    for (auto i : {a, b, c})
        array[i] += 1;

    for (int i = 1; i < 7; ++i)
    {
        if (array[i] > 0 && i > max_number)
        {
            max_number = i;
        }

        if (array[i] > max_count)
        {
            max_count = array[i];
            max_index = i;
        }
        else if (array[i] == max_count && i > max_index)
        {
            max_index = i;
        }

        switch (max_count) {
            case 3:
                reward = 10000 + (max_index) * 1000;
                break;
            case 2:
                reward = 1000 + (max_index) * 100;
                break;
            default:
                reward = max_number * 100;
        }
    }

    std::cout << reward;
    return 0;
}