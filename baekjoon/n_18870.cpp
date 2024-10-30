#include <iostream>
#include <vector>
#include <set>
#include <map>

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

    std::map<int32_t, int32_t> m1;
    int32_t index = 0;
    for (int32_t n : s1)
        m1[n] = index++;

    for (int32_t n : v1)
        std::cout << m1[n] << " ";

    return 0;
}