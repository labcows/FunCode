#include <iostream>

int16_t ANSWER = INT16_MAX;
int16_t calculate_board(char (&case_b)[8][8], char first)
{
    int16_t count = (first == case_b[0][0] ? 0 : 1);
    char current_word, opposite_word;
    case_b[0][0] = first;

    for(int16_t i = 0; i < 8; ++i)
    {
        for(int16_t j = 0; j < 8; ++j)
        {
            current_word = case_b[i][j];
            opposite_word = (current_word == 'W' ? 'B' : 'W');
            if (i + 1 < 8 && case_b[i + 1][j] == current_word)
            {
                case_b[i + 1][j] = opposite_word;
                ++count;
            }

            if (j + 1 < 8 && case_b[i][j + 1] == current_word)
            {
                case_b[i][j + 1] = opposite_word;
                ++count;
            }

            if (count > ANSWER)
                return INT16_MAX;
        }
    }
    return count;
}

int main(void)
{
    int16_t N, M;
    std::cin >> N >> M;

    char board[50][50] = {0};
    for(int16_t i = 0; i < N; ++i)
    {
        for(int16_t j = 0; j < M; ++j)
        {
              std::cin >> board[i][j];
        }
    }

    char case_w[8][8] = {0};
    char case_b[8][8] = {0};

    int16_t result_w, result_b;
    for(int16_t i = 0; i < N - 7; ++i)
    {
        for(int16_t j = 0; j < M - 7; ++j)
        {

            for(int16_t r = 0; r < 8; ++r)
                for(int16_t c = 0; c < 8; ++c)
                {
                    case_b[r][c] = board[i + r][j + c];
                    case_w[r][c] = board[i + r][j + c];
                }

            result_b = calculate_board(case_b, 'B');
            if (result_b < ANSWER) ANSWER = result_b;

            result_w = calculate_board(case_w, 'W');
            if (result_w < ANSWER) ANSWER = result_w;
        }
    }

    std::cout << ANSWER;
    return 0;
}