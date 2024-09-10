#include <iostream>

int n_14681(){
    int16_t x, y, quadrant;
    std::cin >> x >> y;
    if (x > 0 && y > 0)
        quadrant = 1;
    else if (x < 0 && y > 0)
        quadrant = 2;
    else if (x < 0 && y < 0)
        quadrant = 3;
    else
        quadrant = 4;
    std::cout << quadrant;
    return 0;
}
