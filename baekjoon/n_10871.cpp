#include <iostream>

int n_10807() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int32_t N, X, num;
    std::cin >> N >> X;

    for (int32_t i = 0; i < N; ++i)
    {
        std::cin >> num;
        if (num < X)
            std::cout << num << " ";
    }

    return 0;
}