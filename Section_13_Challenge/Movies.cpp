#include "Movies.h"
#include <iostream>

Movies::Movies() {
    
}
void Movies::add_movie(std::string name, std::string rating, int times_watched) {
    Movie temp = Movie(name, rating, times_watched);
    movies.push_back(temp);
}

void Movies::increase_watch_count(std::string movie_name) {
    for (Movie movie: movies) {
        if (movie.name.compare(movie_name) == 0) {
            std::cout<<"Hello!";
            movie.times_watched++;
        }
    }
}
int Movies::display_watch_count(std::string movie_name) {
    for (Movie movie: movies) {
        if (movie.name == movie_name) {
            return movie.times_watched;
        }
    }
}