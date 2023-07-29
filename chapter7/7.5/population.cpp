#include <iostream>
#include "population.hpp"

Population::Population(float p, float b, float d) : population(p), births(b), deaths(d)
{
    if(population < 2)
    {
        population = 2;
    }
    if(births < 0)
    {
        births = 2;
    }
    if(deaths < 0)
    {
        deaths = 2;
    }
}

void Population::setPopulation(float p)
{
    if(p < 2)
    {
        population = 2;
    }
    else
    {
        population = p;
    }
}

void Population::setBirths(float b)
{
    if(b < 0)
    {
        births = 0;
    }
    else
    {
        births = b;
    }
}

void Population::setDeaths(float d)
{
    if(d < 0)
    {
        deaths = 0;
    }
    else
    {
        deaths = d;
    }
}

void Population::getBirthRate()
{
    std::cout << births / population << std::endl;
}

void Population::getDeathRate()
{
    std::cout << deaths / population << std::endl;
}