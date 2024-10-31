#include <iostream>
#include <unordered_map>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::unordered_map<std::string, int16_t> map;
    int32_t N, M;
    std::cin >> N >> M;

    std::string word;
    while(N--)
    {
        std::cin >> word;
        map[word] = 1;
    }

    int32_t counter = 0;
    while(M--)
    {
        std::cin >> word;
        counter += (map.count(word));
    }

    std::cout << counter;

    return 0;
}