#include <iostream>
#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int times_watched) {
    this->name = name;
    this->rating = rating;
    this->times_watched = times_watched;
}

void Movie::display() {
    std::cout<<name<<", "<<rating<<", "<<times_watched<<std::endl;
}