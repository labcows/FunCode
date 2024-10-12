#include <iostream>

int main()
{
    int32_t N;
    std::cin >> N;

    int32_t counter(0), incrementor(1);
    int32_t numerator(0), denominator(0);

    while(true)
    {
        counter += incrementor;

        if (incrementor % 2 == 0)
        {
            numerator = incrementor;
            denominator = 1;
        }
        else
        {
            numerator = 1;
            denominator = incrementor;
        }

        if (counter == N) break;

        if (counter > N)
        {
            if (incrementor % 2 == 0)
            {
                numerator -= counter - N;
                denominator += counter - N;
            }
            else
            {
                numerator += counter - N;
                denominator -= counter - N;;
            }

            break;
        }
        else
        {
            if (incrementor % 2 == 0)
            {
                ++numerator;
                --denominator;
            }
            else
            {
                ++numerator;
                --denominator;
            }
        }

        ++incrementor;
    }

    std::cout << numerator << "/" << denominator << std::endl;
    return 0;
}