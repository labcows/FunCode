#include <iostream>

int main()
{
    std::string input;
    std::getline(std::cin, input);

    int32_t index = 0, counter = 0;
    while (index < input.length())
    {
        if (input[index] == ' ')
        {
            ++index;
            continue;
        }

        while (input[index] != ' ' && index < input.length())
        {
            ++index;
        }
        ++counter;
    }
    std::cout << counter;
    return 0;
}