#include <iostream>

int main()
{
    int16_t x, y, w, h, answer = 1000;
    std::cin >> x >> y >> w >> h;

    if (w - x < answer)
        answer = w - x;
    if (x < answer)
        answer = x;
    if (h - y < answer)
        answer = h - y;
    if (y < answer)
        answer = y;

    std::cout << answer;
    return 0;
}