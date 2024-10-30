#include <iostream>
#include <vector>
#include <algorithm>

bool compare(const std::pair<int32_t, int32_t>& p1, const std::pair<int32_t, int32_t>& p2)
{
    if (p1.second < p2.second)
        return true;

    if (p1.second == p2.second && p1.first < p2.first)
        return true;

    return false;
}

int main(void)
{
    std::vector<std::pair<int32_t, int32_t> > locations;
    int32_t N;
    std::cin >> N;

    int32_t x, y;
    while(N--)
    {
        std::cin >> x >> y;
        locations.emplace_back(x, y);
    }

    std::sort(locations.begin(), locations.end(), compare);

    for(std::pair<int32_t, int32_t> p : locations)
        std::cout << p.first << " " << p.second << "\n";

    return 0;
}