#include <iostream>

bool IsPrimeNumber(int16_t num)
{
    if (num == 1)
        return false;

    for (int16_t i = 2; i <= (int16_t)sqrt(num); ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int32_t M, N, min_number = INT32_MAX, total = 0;
    std::cin >> M >> N;

    for (int32_t i = M; i < N + 1; ++i)
    {
        if (IsPrimeNumber(i))
        {
            total += i;
            if (i < min_number) min_number = i;
        }
    }

    if (total != 0)
    {
        std::cout << total << std::endl;
        std::cout << min_number << std::endl;
    }
    else
    {
        std::cout << -1;
    }

    return 0;
}