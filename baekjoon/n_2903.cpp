#include <iostream>

int main()
{
    int32_t N, dots(2);
    std::cin >> N;

    while(N--)
        dots = dots * 2 - 1;

    std::cout << dots * dots;
    return 0;
}