#include <iostream>

int main()
{
    int32_t first, second;
    while(true)
    {
        std::cin >> first >> second;

        if (first == 0 && second == 0)
            break;

        std::cout << ((first > second) ? "Yes" : "No") << std::endl;
    }
    return 0;
}