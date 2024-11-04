#include <iostream>
#include <unordered_map>

int main(void) {
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios::sync_with_stdio(false);

    std::unordered_map<int, int> cards;

    int N, M;
    std::cin >> N;

    int number;
    while (N--) {
        std::cin >> number;
        if (cards[number] == 0)
            cards[number] = 1;
        else
            cards[number]++;
    }

    std::cin >> M;
    while (M--) {
        std::cin >> number;
        std::cout << cards[number] << " ";
    }

    return 0;
}