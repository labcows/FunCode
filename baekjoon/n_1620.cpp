#include <iostream>
#include <unordered_map>

int main(void) {

    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios::sync_with_stdio(false);

    int N, M;
    std::cin >> N >> M;

    std::unordered_map<std::string, std::string> wiki;

    std::string pokemon;
    int order = 1;

    while (N--) {
        std::cin >> pokemon;
        wiki[std::to_string(order)] = pokemon;
        wiki[pokemon] = std::to_string(order);
        ++order;
    }

    std::string input;
    while (M--) {
        std::cin >> input;
        std::cout << wiki.find(input)->second << '\n';
    }

    return 0;
}
