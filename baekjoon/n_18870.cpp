#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main(void)
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int32_t N;
    std::cin >> N;

    std::vector<int32_t> v1;
    std::set<int32_t> s1;

    int32_t num;
    while(N--)
    {
        std::cin >> num;
        v1.push_back(num);
        s1.insert(num);
    }

    for (auto& v : v1)
        std::cout << std::distance(s1.begin(), s1.find(v)) << " ";

    return 0;
}