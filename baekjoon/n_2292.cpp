#include <iostream>

int main()
{
    int32_t N;
    std::cin >> N;

    int32_t number(1), i(1);
    while(number < N)
        number += 6 * i++;

    std::cout << i;

    return 0;
}