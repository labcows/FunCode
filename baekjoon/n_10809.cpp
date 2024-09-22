#include <iostream>
#include <algorithm>

int main()
{
    std::string s;
    std::cin >> s;
    int16_t arr[26];
    std::fill_n(arr, 26, -1);

    int16_t index = 0;
    while(index < s.length())
    {
        if (arr[s[index] - 97] == -1)
            arr[s[index] - 97] = index;
        ++index;
    }

    for (int16_t i: arr)
        std::cout << i << " ";
    return 0;
}