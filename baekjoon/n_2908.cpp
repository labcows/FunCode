#include <iostream>
#include <algorithm>

int main()
{
    std::string first, second;
    std::cin >> first >> second;

    std::reverse(first.begin(), first.end());
    std::reverse(second.begin(), second.end());
    int16_t index = 0;
    while (index < 3)
    {
        if (first[index] > second[index])
        {
            std::cout << first;
            break;
        }

        else if(first[index] < second[index])
        {
            std::cout << second;
            break;
        }
        ++index;
    }

    return 0;
}