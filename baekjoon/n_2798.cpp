#include <iostream>
#include <vector>
#include <sstream>

int main()
{
    int32_t N, M, answer(0);
    std::cin >> N >> M;

    std::vector<int32_t> cards(N);
    for (int i = 0; i < N; ++i)
        std::cin >> cards[i];

    int32_t curr_total;
    for (int32_t i = 0; i < N - 2; ++i)
        for (int32_t j = i + 1; j < N - 1; ++j)
            for (int32_t k = j + 1; k < N; ++k)
            {
                curr_total = cards[i] + cards[j] + cards[k];
                if (curr_total <= M && answer < curr_total)
                    answer = curr_total;
            }

    std::cout << answer;
    return 0;
}