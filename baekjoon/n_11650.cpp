#include <vector>
#include <iostream>
#include <algorithm>

int main(void)
{

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::vector<std::pair<int32_t, int32_t> > locations;
    int32_t N;
    std::cin >> N;

    int32_t x, y;
    while (N--) {
        std::cin >> x >> y;
        locations.emplace_back(x, y);
    }

    std::sort(locations.begin(), locations.end(), std::less<std::pair<int32_t, int32_t> >());

    for (std::pair<int32_t, int32_t> p : locations)
        std::cout << p.first << " " << p.second << '\n';
    return 0;
}