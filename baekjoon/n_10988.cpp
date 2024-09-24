#include <iostream>

int main()
{
    std::string input;
    std::cin >> input;

    int16_t left = 0, right = input.length() - 1;
    while (left < right)
    {
        if (input[left] != input[right])
        {
            std::cout << 0;
            return 0;
        }
        ++left;
        --right;
    }

    std::cout << 1;
    return 0;
}