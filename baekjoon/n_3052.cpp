#include <iostream>

int main(){
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int16_t remains [42] = {};

    int16_t number;
    for (int16_t i = 0; i < 10; ++i)
    {
        std::cin >> number;
        ++remains[number % 42];
    }

    int16_t count = 0;
    for (int16_t i : remains)
    {
        if (i >= 1)
            ++count;
    }

    std::cout << count;
    return 0;
}