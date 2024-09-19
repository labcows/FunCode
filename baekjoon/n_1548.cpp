#include <iostream>

int main(){
    std::cin.sync_with_stdio(false);

    double scores[1000] = {};

    int16_t N, currScore, maxScore = -1;
    std::cin >> N;

    for (int16_t i = 0; i < N; ++i)
    {
        std::cin >> currScore;
        scores[i] = currScore;
        maxScore = currScore > maxScore ? currScore : maxScore;
    }

    double total = 0.0;
    for (int16_t i = 0; i < N; ++i)
    {
        total += scores[i] / maxScore * 100;
    }

    std::cout << total / (double)N;

    return 0;
}