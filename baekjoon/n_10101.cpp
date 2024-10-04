#include <iostream>
#include <set>

int main()
{
    int16_t a, b, c;
    std::cin >> a >> b >> c;

    if (a + b + c != 180)
    {
        std::cout << "Error";
        return 0;
    }

    std::set<int16_t> angles;
    angles.insert(a);
    angles.insert(b);
    angles.insert(c);

    int16_t size = angles.size();
    if (size == 1)
        std::cout << "Equilateral";
    else if (size == 2)
        std::cout << "Isosceles";
    else
        std::cout << "Scalene";

    return 0;
}