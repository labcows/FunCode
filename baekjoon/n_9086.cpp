#include <iostream>

int main() {

    std::string s;
    int T;
    std::cin >> T;

    while (T > 0)
    {
        std::cin >> s;
        std::cout << s[0] << s[s.length() - 1] << std::endl;
        --T;
    }

    return 0;
};