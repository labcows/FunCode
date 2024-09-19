#include <iostream>

int main(){
    std::cin.sync_with_stdio(false);

    int16_t calculator[101] = {};
    for (int16_t i = 0; i < 101;  ++i)
    {
        calculator[i] = i;
    }

    int16_t N, M;
    std::cin >> N >> M;

    int16_t start, end, tmp;
    for (int16_t i = 0; i < M; ++i)
    {
        std::cin >> start >> end;

        while (start < end)
        {
            tmp = calculator[start];
            calculator[start] = calculator[end];
            calculator[end] = tmp;
            start++;
            end--;
        }
    }

    for (int16_t i = 1; i < N + 1;  ++i)
    {
        std::cout << calculator[i] << " ";
    }

    return 0;
}