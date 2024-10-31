#include <iostream>
#include <algorithm>
#include <set>

bool compare(const std::string &s1, const std::string &s2){
    return s1 > s2;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::set<std::string > s;
    int32_t N;
    std::cin >> N;

    std::string name, mark;
    while(N--)
    {
        std::cin >> name >> mark;
        if (mark == "enter")
            s.insert(name);
        else if (mark == "leave")
            s.erase(name);
    }

    std::vector<std::string> v (s.begin(), s.end());
    std::sort(v.begin(), v.end(), compare);

    for (std::string name : v)
        std::cout << name << '\n';
    return 0;
}