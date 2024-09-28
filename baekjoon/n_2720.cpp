#include <iostream>

int main()
{
    int32_t test_case;
    std::cin >> test_case;

    int32_t quarter(25), dime(10), nickel(5), penny(1), money;
    int32_t q, d, n, p;
    while (test_case-- > 0)
    {
        std::cin >> money;

        q = money / quarter;
        money %= quarter;

        d = money / dime;
        money %= dime;

        n = money / nickel;
        money %= nickel;

        p = money / penny;

        std::cout << q << " " << d << " " << n << " " << p << std::endl;
    }
    return 0;
}