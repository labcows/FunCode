#include <iostream>

int main()
{
    std::string arr[5];
    size_t max_len = 0;

    std::string line;
    for (int16_t i = 0; i < 5; ++i)
    {
        std::cin >> line;
        arr[i] = line;
        max_len = (line.length() > max_len) ? line.length() : max_len;
    }

    std::string answer = "";
    for (size_t c = 0; c < max_len; ++c)
    {
        for (int16_t r = 0; r < 5; ++r)
            if (c < arr[r].length()) answer += arr[r][c];
    }

    std::cout << answer;
    return 0;
}