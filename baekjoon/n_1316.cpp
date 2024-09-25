#include <iostream>

int main()
{
    int16_t N, answer = 0;
    std::cin >> N;

    std::string word;
    bool flag;

    while (N > 0)
    {
        int16_t alphabet[26] = {0};

        std::cin >> word;
        ++alphabet[word[0] - 97];
        flag = true;

        for (int16_t i = 1; i < word.length(); ++i)
        {
            if (word[i] == word[i - 1])
                ++alphabet[word[i] - 97];

            else
            {
                if (alphabet[word[i] - 97] > 0)
                {
                    alphabet[word[i] - 97] = -1;
                    flag = false;
                    break;
                }
                else
                    ++alphabet[word[i] - 97];
            }
        }
        answer += (flag ? 1 : 0);
        --N;
    }

    std::cout << answer;
    return 0;
}