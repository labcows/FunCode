#include <iostream>

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);
    int32_t N, max = -1000000, min = 1000000, num;

    std::cin >> N;
    for (int32_t i = 0; i < N; ++i)
    {
        std::cin >> num;
        if (num > max) max = num;
        if (num < min) min = num;
    }

    std::cout << min << " " << max;
    return 0;
}