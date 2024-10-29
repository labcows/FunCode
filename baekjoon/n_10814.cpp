#include <vector>
#include <iostream>
#include <algorithm>

bool compare(const std::pair<int32_t , std::string>& a,const std::pair<int32_t , std::string>& b)
{
    return a.first < b.first;
}

int main(void)
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::vector<std::pair<int32_t, std::string> > members;
    int32_t N;
    std::cin >> N;

    int32_t age;
    std::string name;
    while(N--)
    {
        std::cin >> age >> name;
        members.emplace_back(age, name);
    }

    std::stable_sort(members.begin(), members.end(), compare);

    for (const auto& m : members)
        std::cout << m.first << " " << m.second << '\n';

    return 0;
}