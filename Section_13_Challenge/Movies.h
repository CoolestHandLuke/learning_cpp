#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <string>
#include <vector>
#include "Movie.h"

class Movies {
    private:
        std::vector<Movie> movies;
    
    public:
        void add_movie(std::string name, std::string rating, int times_watched);
        void increase_watch_count(std::string movie_name);
        void display_movies();    
        Movies();
};

Movies::Movies() {
    
}
void Movies::add_movie(std::string name, std::string rating, int times_watched) {
    Movie temp = Movie(name, rating, times_watched);
    movies.push_back(temp);
}

#endif