#ifndef MOVIE_H
#define MOVIE_H


#include <string>

/*
 class Movie - it models a single movie which includes
 - movie name
 - movie rating (G, PG, PG-13, R)
 - watched (the numbers of times the movies has been watched)

*/
class Movie
{
public:
    std::string name;
    std::string rating;
    int times_watched;
    
    // Constructor
    Movie(std::string name_val="None", std::string rating_val="None", int times_val=0);
    // Copy constructor
    Movie(const Movie &source);
    // Destructor
    ~Movie();

};

#endif // MOVIE_H
