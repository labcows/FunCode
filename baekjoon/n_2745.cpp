#include <iostream>

int main()
{
    std::string N;
    int32_t B, answer(0), multiplier(1);
    std::cin >> N >> B;

    for (int i = int(N.length() - 1); 0 <= i; --i)
    {
        if ('0' <= N[i] && N[i] <= '9')
            answer += (N[i] - 48) * multiplier;
        else
            answer += (N[i] - 55) * multiplier;

        multiplier *= B;
    }

    std::cout << answer;
    return 0;
}