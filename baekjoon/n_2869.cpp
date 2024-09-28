#include <iostream>

int main()
{
    int32_t up, down, peek;
    std::cin >> up >> down >> peek;

    int32_t days = ((peek - up) / (up - down)) + 1;
    if (((peek - up) % (up - down)) != 0) days++;

    std::cout << days;
    return 0;
}