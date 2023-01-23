#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie {
    private:
        std::string name;
        std::string rating;
        int times_watched;

    public:
        Movie(std::string name, std::string rating, int times_watched);
};

Movie::Movie(std::string name, std::string rating, int times_watched) {
    this->name = name;
    this->rating = rating;
    this->times_watched = times_watched;
}

#endif