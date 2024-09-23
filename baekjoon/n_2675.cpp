#include <iostream>

int main()
{
    int32_t T;
    std::cin >> T;

    int16_t R;
    std::string S, result = "";
    while (T > 0)
    {
        std::cin >> R >> S;
        for (char s : S)
            for(int16_t i = 0; i < R; ++i)
                result += s;
        std::cout << result << std::endl;
        result = "";
        --T;
    }

    return 0;
}