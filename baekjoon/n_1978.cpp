#include <iostream>
#include <cmath>

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
    int16_t N, num, count(0);
    std::cin >> N;
    for (int16_t i = 0; i < N; ++i)
    {
        std::cin >> num;
        if (IsPrimeNumber(num))
            ++count;
    }
    std::cout << count;
    return 0;
}