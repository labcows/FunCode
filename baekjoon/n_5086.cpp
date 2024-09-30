#include <iostream>

int main()
{
    int32_t first, second;
    while(true)
    {
        std::cin >> first >> second;
        if (first == 0 and second == 0)
            break;

        if (second % first == 0)
            std::cout << "factor" << std::endl;
        else if (first % second == 0)
            std::cout << "multiple" << std::endl;
        else
            std::cout << "neither" << std::endl;
    }
    return 0;
}