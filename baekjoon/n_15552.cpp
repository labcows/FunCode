#include <iostream>

int n_15552() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int32_t T, a, b;
    std::cin >> T;

    for (int32_t i = 0; i < T; ++i)
    {
        std::cin >> a >> b;
        std::cout << a + b << "\n";
    }

    return 0;
}