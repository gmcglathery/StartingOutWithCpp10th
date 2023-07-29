#include <iostream>
#include "movieData.hpp"

MovieData::MovieData(std::string t, std::string d, int y, float r) : title(t), director(d), year(y), runTime(r) {}

void MovieData::getMovieData()
{
    std::cout << "Title: " << title << std::endl;
    std::cout << "Director: " << director << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Run Time: " << runTime << " hours" << std::endl;
}