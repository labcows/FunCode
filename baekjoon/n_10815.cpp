#include <iostream>
#include <unordered_map>

int main(void)
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::unordered_map<int32_t , int32_t > map;

    int32_t N;
    std::cin >> N;

    int32_t num;
    while(N--)
    {
        std::cin >> num;
        map[num] = 1;
    }

    int32_t M;
    std::cin >> M;
    while(M--)
    {
        std::cin >> num;
        std::cout << (map.count(num) != 1 ? 0 : 1) << " " ;
    }

    return 0;
}