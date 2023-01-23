#include "Movies.h"
#include "Movie.h"
#include <string>

void Movies::add_movie(std::string name, std::string rating, int times_watched) {
    Movie temp = Movie(name, rating, times_watched);
    movies.push_back(temp);
}