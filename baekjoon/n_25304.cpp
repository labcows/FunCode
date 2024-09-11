#include <iostream>

int n_25304()
{
    int32_t receipt_total, n, sum = 0, price, qty;

    std::cin >> receipt_total >> n;
    for (int32_t i = 0; i < n ; ++i)
    {
        std::cin >> price >> qty;
        sum += price * qty;
    }

    std::cout << (receipt_total == sum ? "Yes" : "No") << std::endl;

    return 0;
}
