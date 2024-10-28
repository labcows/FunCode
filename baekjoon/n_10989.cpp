#include <iostream>

int main(void)
{

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int32_t array[10001] = {0};

    int64_t N;
    std::cin >> N;

    int32_t number;
    while(N--)
    {
        std::cin >> number;
        ++array[number];
    }

    int32_t count = 0;
    for(size_t i = 1; i < 10001; ++i)
    {
        count = array[i];
        while(count--)
            std::cout << i << '\n';
    }

    return 0;
}
