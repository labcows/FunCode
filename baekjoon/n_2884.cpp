#include <iostream>

int n_2884(){
    int16_t hour, minute;
    std::cin >> hour >> minute;

    if (minute >= 45)
    {
        minute -= 45;
    }
    else
    {
        minute += 15;
        hour -= 1;
        if (hour == -1)
            hour = 23;
    }

    std::cout << hour << ' ' << minute << std::endl;
    return 0;
}
