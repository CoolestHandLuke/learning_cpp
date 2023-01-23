#include <iostream>
#include "Movie.h"
#include "Movies.h"


int main() {

    //Movie fav_movie {"Pulp Fiction", "Rated R", 12};
    Movies movie_collection {};
    movie_collection.add_movie("Pulp Fiction", "Rated R", 12);
    return 0;
}