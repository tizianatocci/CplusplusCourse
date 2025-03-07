#include "Movies.h"


Movies::Movies()
{
}

Movies::Movies(const Movies &source)
{
}

Movies::~Movies()
{
}

void Movies::add_movie(std::string name_arg, std::string rating_arg, int times_arg){
    Movie film(name_arg, rating_arg, times_arg);
    if (check_if_movie_there(name_arg) != true){
        collection.push_back(film);
        std::cout << "The film " << name_arg << " has been added." << std::endl;
    } else {
        std::cout << "The film " << name_arg << " is already included." << std::endl;
        };
}

void Movies::increment_count_for_movie(std::string name_arg){
    if (check_if_movie_there(name_arg)!=true){
        std::cout << "The film " << name_arg << " is not in collection. " << std::endl; 
    } else {
        for (auto &film:collection){
            if (film.name==name_arg)
                {film.times_watched++;}
        } 
    }
}

void Movies::display_movies() const{
    for (const auto &film:collection)
    {   
        std::cout << "Information for film " << film.name << std::endl;
        std::cout << "Rating: " << film.rating << ", ";
        std::cout<< "Times watched: " << film.times_watched << std::endl;
        std::cout << std::endl;
    }
    
}

bool Movies::check_if_movie_there(std::string name_arg) const{
    bool flag= false;
    for (const auto&film:collection){
        if  (film.name==name_arg){
            flag=true;
            break;
        }
    }
    return flag;
}