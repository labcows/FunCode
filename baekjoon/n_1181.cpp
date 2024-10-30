#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

bool compare(const std::string& s1, const std::string& s2)
{
    if (s1.length() < s2.length())
        return true;

    if (s1.length() == s2.length() && s1 < s2)
        return true;

    return false;
}

int main(void)
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::set<std::string> words;
    int32_t N;
    std::cin >> N;

    std::string word;
    while(N--)
    {
        std::cin >> word;
        words.insert(word);
    }

    std::vector<std::string> sorted_words(words.begin(), words.end());

    std::sort(sorted_words.begin(), sorted_words.end(), compare);

    for (std::string s: sorted_words)
        std::cout << s << '\n';

    return 0;
}