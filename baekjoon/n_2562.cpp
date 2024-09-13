#include <iostream>

int main(){
    int16_t max = -1, n, index;

    for (int16_t i = 1; i < 10; ++i)
    {
        std::cin >> n;
        if (n > max)
        {
            max = n;
            index = i;
        }
    }
    std::cout << max << std::endl;
    std::cout << index << std::endl;
    return 0;
}