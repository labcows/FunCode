#include <iostream>

int n_11022() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int32_t T, a, b;
    std::cin >> T;

    for (int32_t i = 0; i < T; ++i)
    {
        std::cin >> a >> b;
        std::cout << "Case #" << i + 1 <<": " << a << " + " << b << " = " << a + b << "\n";
    }

    return 0;
}