#include <iostream>
#include "car.hpp"

Car::Car(int y, std::string m) : year(y), make(m), speed(0) {}

void Car::getYear()
{
    std::cout << year;
}

void Car::getMake()
{
    std::cout << make << std::endl;
}

void Car::getSpeed()
{
    std::cout << speed << std::endl;
}

void Car::accelerate()
{
    speed += 5;
}

void Car::brake()
{
    speed -= 5;
}