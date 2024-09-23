#include <iostream>

int main()
{
    int16_t phone [26] = {
            3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,
            8,8,8,8,9,9,9,10,10,10,10
    };

    std::string input;
    std::cin >> input;

    int16_t answer = 0;
    for (int16_t i = 0; i < input.length(); ++i)
        answer += phone[(int)input[i] - 65];

    std::cout << answer;
    return 0;
}