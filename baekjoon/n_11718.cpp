#include <iostream>

int main()
{
    std::string input;

    while (true)
    {
        std::getline(std::cin, input);
        if (input.empty())
            break;
        std::cout << input << std::endl;
    }
    return 0;
}