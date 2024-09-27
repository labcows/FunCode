#include <iostream>
#include <algorithm>

int main()
{
    std::string answer = "";
    int32_t N, B, remains;
    std::cin >> N >> B;

    while (N > 0)
    {
        remains = N % B;
        if (remains < 10)
            answer += char(remains + '0');
        else
            answer += char(remains - 10 + 'A');
        N /= B;
    }

    reverse(answer.begin(), answer.end());
    std::cout << answer;
    return 0;
}