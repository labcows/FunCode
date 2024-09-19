#include <iostream>

int main(){
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int32_t basket[101] = {};
    int32_t N, M, first, second, tmp;

    std::cin >> N >> M;

    for (auto i = 0; i < N + 1; ++i)
    {
        basket[i] = i;
    }

    for (auto i = 0; i < M; ++i)
    {
        std::cin >> first >> second;
        tmp = basket[first];
        basket[first] = basket[second];
        basket[second] = tmp;
    }

    for (auto i = 1; i < N + 1; ++i)
    {
        std::cout << basket[i] << " ";
    }

    return 0;
}