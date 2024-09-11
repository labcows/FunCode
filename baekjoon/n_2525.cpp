#include <iostream>

int n_2525(){
    int32_t hour, minute, duration, end_hour, end_minute;
    std::cin >> hour >> minute >> duration;

    end_hour = duration / 60;
    end_minute = duration % 60;

    end_minute += minute;
    if (end_minute > 59)
    {
        end_minute -= 60;
        end_hour += 1;
    }

    end_hour = (end_hour + hour) % 24;
    std::cout << end_hour << " " << end_minute << std::endl;

    return 0;
}
