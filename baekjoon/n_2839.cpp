#include <iostream>

int main() {
    int32_t N, total;
    std::cin >> N;

    if (N % 5 == 0) {
        std::cout << N / 5;
        return 0;
    }

    total = N;
    if (N % 3 == 0)
        total = N / 3;

    int32_t threes(N / 3), fives(0);

    while (threes > 0) {
        if (threes * 3 + fives * 5 == N && threes + fives < total)
            total = threes + fives;

        --threes;
        fives = (N - threes * 3) / 5;
    }

    std::cout << (total != N ? total : -1);
    return 0;
}