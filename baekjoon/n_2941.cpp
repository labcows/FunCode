#include <iostream>

int main()
{
    std::string word;
    std::cin >> word;

    int16_t counter = 0, index = 0;
    char curr_char;

    while(index < word.length())
    {
        curr_char = word[index];

        if (curr_char == 'd')
        {
            if(index < word.length() - 2 && word[index + 1] == 'z' && word[index + 2] == '=')
                index += 2;
            else if (curr_char == 'd' && word[index + 1] == '-')
                ++index;
        }
        else if (curr_char == 'c')
        {
            if (index < word.length() - 1 && (word[index + 1] == '=' || word[index + 1] == '-'))
                ++index;
        }
        else if (curr_char == 'l' || curr_char == 'n')
        {
            if (index < word.length() - 1 && word[index + 1] == 'j')
                ++index;
        }
        else if (curr_char == 's' || curr_char == 'z')
        {
            if (index < word.length() - 1 && word[index + 1] == '=')
                ++index;
        }
        ++index;
        ++counter;
    }

    std::cout << counter;
    return 0;
}