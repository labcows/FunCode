#include <iostream>

int main()
{
    int32_t N, K, answer(-1), count(0), number(1);
    std::cin >> N >> K;
    while(number <= N)
    {
        if (N % number == 0)
        {
            ++count;
            if (count == K)
            {
                answer = number;
                break;
            }
        }
        ++number;
    }

    std::cout << (answer != -1 ? answer : 0);

    return 0;
}