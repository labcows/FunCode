#include <iostream>

int main(void)
{
    int16_t N;
    std::string number;
    std::cin >> N >> number;

    int16_t answer = 0;
    while (N > 0)
    {
        answer += (int)number[N - 1] - 48;
        --N;
    }
    std::cout << answer;
    return 0;
}