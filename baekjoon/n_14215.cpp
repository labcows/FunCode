#include <iostream>

bool IsValidTriangle(int16_t& a, int16_t& b, int16_t& c)
{
    if (a + b <= c)
        return false;
    if (a + c <= b)
        return false;
    if (b + c <= a)
        return false;

    return true;
}

int main()
{
    int16_t a, b, c;
    std::cin >> a >> b >> c;

    if (IsValidTriangle(a, b, c))
    {
        std::cout << a + b + c;
        return 0;
    }

    int16_t max_length = a;

    if (b > max_length) max_length = b;
    if (c > max_length) max_length = c;

    int16_t answer = 0;

    if (a == max_length)
        answer += 2 * (b + c) - 1;

    else if (b == max_length)
        answer += 2 * (a + c) - 1;

    else
        answer += 2 * (a + b) - 1;

    std::cout << answer;
    return 0;
}