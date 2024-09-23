#include <iostream>

int main() {
    std::string str;
    int index;
    std::cin >> str >> index;
    std::cout << str[index - 1];
    return 0;
}