#include <iostream>
#include <sstream>
#include <set>

bool IsValidTriangle(int16_t& a, int16_t& b, int16_t& c)
{
    if (a + b <= c)
        return false;
    if (a + c <= b)
        return false;
    if (b + c <= a)
        return false;

    return true;
}

int main()
{
    int16_t a, b, c;
    std::string line;

    std::set<int16_t> s;

    while (true) {
        getline(std::cin, line);
        std::stringstream iss(line);
        iss >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        if (!IsValidTriangle(a, b, c)) {
            std::cout << "Invalid" << std::endl;
            continue;
        }

        s.insert(a);
        s.insert(b);
        s.insert(c);

        if (s.size() == 3)
            std::cout << "Scalene" << std::endl;
        else if (s.size() == 2)
            std::cout << "Isosceles" << std::endl;
        else
            std::cout << "Equilateral" << std::endl;

        s.clear();
    }
    return 0;
}