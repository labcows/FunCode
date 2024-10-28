#include <iostream>
#include <algorithm>

int main(void)
{
    std::string N;
    std::cin >> N;

    std::sort(N.begin(), N.end(), std::greater<char>());
    std::cout << N;
    return 0;
}