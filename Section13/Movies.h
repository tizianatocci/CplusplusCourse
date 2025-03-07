#ifndef MOVIES_H
#define MOVIES_H

#include <vector>
#include <string>
#include <iostream>
#include "Movie.h"


class Movies
{
private:
    std::vector<Movie> collection;
public:
    // Constructor
    Movies();
    // Copy Constructor
    Movies(const Movies &source);
    // Destructor
    ~Movies();
    // Member functions
    bool check_if_movie_there(std::string name_arg) const;
    void add_movie(std::string name_arg, std::string rating_arg="None", int times_arg=0);
    void increment_count_for_movie(std::string name_arg);
    void display_movies() const;
};

#endif // MOVIES_H
