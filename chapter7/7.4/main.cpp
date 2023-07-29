#include <iostream>
#include "car.hpp"

int main()
{
    Car myCar(2023, "Chevy Silverado");

    myCar.getYear();
    std::cout << " ";
    myCar.getMake();
    std::cout << std::endl;   
    
    for(int i = 0; i < 5; i++)
    {
        myCar.accelerate();
        std::cout << "Current car speed is: ";
        myCar.getSpeed();
        std::cout << std::endl;
    }

    for(int i = 0; i < 5; i++)
    {
        myCar.brake();
        std::cout << "Current car speed is: ";
        myCar.getSpeed();
        std::cout << std::endl;
    }

    return 0;
}