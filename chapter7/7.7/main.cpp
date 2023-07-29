#include <iostream>
#include "movieData.hpp"

int main()
{
    MovieData oppenheimer("Oppenheimer", "Christopher Nolan", 2023, 3);
    MovieData tombstone("Tombstone", "Don't Know", 1995, 1.5);

    oppenheimer.getMovieData();
    tombstone.getMovieData();

    return 0;
}