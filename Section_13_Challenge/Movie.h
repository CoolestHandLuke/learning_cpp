#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <iostream>
#include <string>

class Movie {
    private:
        
    
    public:
        std::string name;
        std::string rating;
        int times_watched;
        
        Movie(std::string name, std::string rating, int times_watched);

        // Getters and Setters
        void set_name(std::string name) {this->name = name;}
        std::string get_name() {return name;}

        void set_rating(std::string rating) {this->rating = rating;}
        std::string get_rating() {return rating;}

        void set_times_watched(int times_watched) {this->times_watched = times_watched;}
        int get_times_watch() {return times_watched;}

        void increment_times_watched() {times_watched++;}

        void display();
        
};

Movie::Movie(std::string name, std::string rating, int times_watched) {
    this->name = name;
    this->rating = rating;
    this->times_watched = times_watched;
}

void Movie::display() {
    std::cout<<name<<", "<<rating<<", "<<times_watched<<std::endl;
}


#endif