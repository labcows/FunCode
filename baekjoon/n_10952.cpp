#include <iostream>

int n_10952() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int32_t a, b;

    while(true)
    {
        std::cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        std::cout << a + b << "\n";
    }

    return 0;
}