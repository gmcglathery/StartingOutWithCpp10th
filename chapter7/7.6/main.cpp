#include <iostream>
#include "gratuity.hpp"

int main()
{
    Tips myTip;
    float x = 0, y = 0;

    bool sentinel = true;
    while(sentinel)
    {
        std::cout << "Enter 99 99 to end program" << std::endl;
        std::cout << "Enter your total bill: ";
        std::cin >> x; std::cout << std::endl;
        std::cout << "Enter your tax rate: ";
        std::cin >> y; std::cout << std::endl;

        if(x == 99 && y == 99)
        {
            return 0;
        }
        myTip.computeTip(x, y);

    }
}