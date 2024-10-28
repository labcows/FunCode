#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int32_t N;
    std::cin >> N;

    std::vector<int32_t> v;

    int32_t num;
    while(N--)
    {
        std::cin >> num;
        v.push_back(num);
    }

    std::sort(v.begin(), v.end());

    for(int32_t n : v)
        std::cout << n << '\n';

    return 0;
}