#include <iostream>

int n_10807() {
    int32_t arr[201]{};
    int32_t N, num, v;

    for (int32_t i = 0; i < N; ++i)
    {
        std::cin >> num;
        arr[num + 100] += 1;
    }

    std::cin >> v;
    std::cout << arr[v + 100];
    return 0;
}