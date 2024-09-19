#include <iostream>

int main(){
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int16_t students [31] = {};
    int16_t submitted;

    for (int16_t i = 0; i < 28; ++i)
    {
        std::cin >> submitted;
        students[submitted] = 1;
    }

    for (int16_t i = 1; i < 31; ++i)
    {
        if (students[i] == 0)
            std::cout << i << std::endl;
    }

    return 0;
}