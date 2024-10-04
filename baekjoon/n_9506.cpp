#include <iostream>

int main()
{
    int32_t number, total;
    std::string msg;

    while(true)
    {
        std::cin >> number;
        if (number == -1)
            break;

        total = 0;
        msg = std::to_string(number) + " = ";

        for (int32_t i = 1; i <= number / 2; ++i)
        {
            if (number % i == 0)
            {
                msg += std::to_string(i);
                total += i;

                if (i != number / 2) msg += " + ";
            }
        }

        if (total == number)
            std::cout << msg << std::endl;
        else
            std::cout << number << " is NOT perfect." << std::endl;
    }
    return 0;
}