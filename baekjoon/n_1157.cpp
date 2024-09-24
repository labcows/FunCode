#include <iostream>

int main()
{
    std::cin.sync_with_stdio(false);
    int32_t alpha [26] = {0};
    std::string input;
    std::cin >> input;

    for (char ch : input)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ++alpha[ch - 'a'];
            continue;
        }
        else
            ++alpha[ch - 'A'];
    }

    int32_t max = -1, count = 0, location = -1;
    for (int16_t i = 0; i < 26; ++i)
    {
        if (alpha[i] == max)
            ++count;
        else if (alpha[i] > max)
        {
            max = alpha[i];
            count = 1;
            location = i;
        }

    }

    std::cout << ((count > 1) ? '?' : (char)(location + 65));

    return 0;
}