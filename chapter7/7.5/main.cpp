#include <iostream>
#include "population.hpp"

int main()
{
    Population myPop(100000, 5000, 2000);

    std::cout << "Birth rate is : ";
    myPop.getBirthRate();

    std::cout << std::endl;

    std::cout << "Death rate is : ";
    myPop.getDeathRate();

    std::cout << std::endl;

    myPop.setPopulation(800000);
    myPop.setBirths(30000);
    myPop.setDeaths(8000);

    std::cout << std::endl;
    std::cout << "Birth rate is : ";
    myPop.getBirthRate();

    std::cout << std::endl;

    std::cout << "Death rate is : ";
    myPop.getDeathRate();

    return 0;
}