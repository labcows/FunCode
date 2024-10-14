#include <iostream>
#include <string>

bool has666(int64_t number)
{
    std::string numStr = std::to_string(number);
    size_t position = numStr.find("666");
    return position <= numStr.size() - 3;
}

int main(void)
{
    int32_t N, count(0);
    std::cin >> N;

    int64_t number = 666;
    while(true)
    {
        if (has666(number))
        {
            ++count;
            if (count == N)
            {
                std::cout << number;
                break;
            }
        }
        number++;
    }
    return 0;
}