/*Write a program that uses a structure named MovieData to store the following information about a movie: title, director, 
release year, and running time.  Include a constructor that allows all four of these member data values to be specified at 
the time a MovieData variable is created. The program should create two MovieData variables and pass each one in turn to a 
function that displays the information about the movie in a clearly formatted manner. Pass the MovieData variables to the 
display function by value.*/

#ifndef MOVIEDATA_HPP
#define MOVIEDATA_HPP

#include <iostream>

class MovieData
{
    private:
        std::string title;
        std::string director;
        int year;
        float runTime;
    public:
        MovieData(std::string, std::string, int, float);
        ~MovieData(){};
        void getMovieData();
};

#endif