#include <iostream>

int main()
{
    int32_t N, answer(INT32_MAX);
    std::cin >> N;

    int32_t curr_number(N), candidate, sub_total;

    while (curr_number--)
    {
        candidate = curr_number;
        sub_total = 0;

        while (candidate > 0)
        {
            sub_total += candidate % 10;
            candidate /= 10;
        }

        if (curr_number + sub_total == N && curr_number < answer)
            answer = curr_number;

    }

    std::cout << ((answer == INT32_MAX) ? 0 : answer);
    return 0;
}