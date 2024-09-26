#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int16_t> > matrix(100);
    int16_t N, M;
    std::cin >> N >> M;

    for (int16_t row = 0; row < N; ++row)
    {
        std::vector<int16_t> column;
        int16_t element;
        for (int16_t col = 0; col < M; ++col)
        {
            std::cin >> element;
            column.push_back(element);
        }
        matrix[row] = column;
    }

    for (int16_t row = 0; row < N; ++row)
    {
        int16_t element;
        std::string s = "";
        for (int16_t col = 0; col < M; ++col)
        {
            std::cin >> element;
            s += std::to_string(matrix[row][col] + element) + " ";
        }
        std::cout << s << std::endl;
    }

    return 0;
}