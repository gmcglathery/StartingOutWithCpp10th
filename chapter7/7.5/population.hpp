/*Population
In a population, the birth rate and death rate are calculated as follows:
    birth rate = number of births / population
    death rate = number of deaths / population

For example, in a population of 100,000 that has 5,000 births and 2,000 deaths per year,
    birth rate = 5,000 / 100,000 = 0.05
    death rate = 2,000 / 100,000 = 0.02

 
Design a Population class that stores a current population, annual number of births, 
and annual number of deaths for some geographic area. The class should allow these 
three values to be set in either of two ways: by passing arguments to a three-parameter 
constructor when a new Population object is created or by calling the setPopulation, 
setBirths, and setDeaths class member functions. In either case, if a population figure 
less than 2 is passed to the class, use a default value of 2. If a birth or death figure 
less than 0 is passed in, use a default value of 0. The class should also have getBirthRate 
and getDeathRate functions that compute and return the birth and death rates. Write a short 
program that uses the Population class and illustrates its capabilities.
*/

#ifndef POPULATION_HPP
#define POPULATION_HPP

#include <iostream>

class Population {
    private:
        float population;
        float births;
        float deaths;
    public:
        Population(float, float, float);
        ~Population(){};
        void setPopulation(float);
        void setBirths(float);
        void setDeaths(float);
        void getBirthRate();
        void getDeathRate();
};

#endif