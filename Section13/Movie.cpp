#include "Movie.h"

Movie::Movie(std::string name_val, std::string rating_val, int times_val)
    : name{name_val}, rating{rating_val}, times_watched{times_val}
{
    }

Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.times_watched}
{
    }

Movie::~Movie()
{
    }

