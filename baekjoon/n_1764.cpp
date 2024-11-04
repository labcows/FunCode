#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

int main(void) {
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios::sync_with_stdio(false);

    std::unordered_map<std::string, int> people;
    std::vector<std::string> p_list;

    int N, M;
    std::cin >> N >> M;

    std::string name;
    int count = N + M;
    while (count--) {
        std::cin >> name;
        people[name]++;
        if (people[name] == 2) p_list.push_back(name);
    }

    std::cout << (int) p_list.size() << '\n';
    std::sort(p_list.begin(), p_list.end());
    for (std::string p: p_list)
        std::cout << p << '\n';

    return 0;
}