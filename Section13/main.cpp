/*
 class Movie - it models a single movie which includes
 - movie name
 - movie rating (G, PG, PG-13, R)
 - watched (the numbers of times the movies has been watched)

 class Movies - models a collection of move object
  it should be modeled with a vector
   Movies needs to know about Movie since it is a collection of Movie objects.
  Howerever, our main driver should only interact with the Movies class.

  A simple main should be able to:
   * create a Movies object
   * ask the Movies object to add a movie by providing name, rating, watched count
   * ask the Movies object to increment the watched count by 1 for a movie given its name
   * ask the Movies object to display all of its movies
Additionally,
 * if we try to add a movie whose name is already in the movies collection we should display this error to the user
 * if we try to increment the watched count for a movie whose name is not in the movies collection
 * we should display this error to the user

 You should have these files:
  * Movie.h
  * Movie.cpp
  * Movies.h
  * Movies.cpp
  * main.cpp
 */
#include "Movies.h"

using namespace std;

int main(){
    Movies my_movies;
    my_movies.increment_count_for_movie("Titanic");
    my_movies.add_movie("Titanic", "PG", 1);
    my_movies.add_movie("Titanic", "PG", 1);
    my_movies.display_movies();
    my_movies.increment_count_for_movie("Titanic");
    my_movies.increment_count_for_movie("Night");
    my_movies.add_movie("Night");
    my_movies.display_movies();
    return 0;
}
