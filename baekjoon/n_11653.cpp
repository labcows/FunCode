#include <iostream>

int main()
{
    int32_t number;
    std::cin >> number;

    if (number == 1)
        return 0;

    for (int32_t i = 2; i <= number; ++i)
    {
        if (number == 1)
            break;

        while(number % i == 0) {
            std::cout << i << std::endl;
            number /= i;
        }
    }
    return 0;
}